#include <iostream>
#include <algorithm>
#include <string>

#include "day01.h"
#include "../util.h"

// parse into list of ints, summing over each group of ints
day01::input_t day01::parse(const parse_t& input) {
	std::vector<int> totals;

	// loop over the food counts, when we get a blank line, push the partial total.
	// This is very un-functional, but works for now.
	int partial{ 0 };
	for (std::string f : input) {
		if (f.empty()) { totals.push_back(partial); partial = 0; }
		else { partial += std::stoi(f); }
	}

	totals.push_back(partial);

	return totals;
}

// food counts per elf are accumulated in the parser so we have a list of totals per elf.
// we just need to find the largest of the whole vector
day01::output_t day01::first_part(const day01::input_t& input) {
	return *std::max_element(input.begin(), input.end());
}

// sum the top 3 scores, by first sorting in descending order
day01::output_t day01::second_part(const day01::input_t& input) {
	// make a mutable copy of the data by first allocating enough space, then copying with a sorter
	input_t desc(input.size());
	std::partial_sort_copy(begin(input), end(input), begin(desc), end(desc), std::greater<int>());

	return desc[0] + desc[1] + desc[2];
}

day01::output_t day01::expected_p1() {
	return 70698;
}

day01::output_t day01::expected_p2() {
	return 206643;
}