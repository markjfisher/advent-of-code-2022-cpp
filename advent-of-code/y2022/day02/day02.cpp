#include "day02.h"

#include <iostream>
#include <algorithm>

#include "../aoc2022.h"
#include "util.h"

day02::input_t day02::parse(const parse_t& input) {
	input_t res(input.size());
	std::ranges::transform(input, res.begin(), [](auto&& str) { return std::stoi(str); });
	return res;
}

day02::output_t day02::first_part(const day02::input_t& input) {
	return 0;
}

day02::output_t day02::second_part(const day02::input_t& input) {
	return 0;
}

day02::output_t day02::expected_p1() {
	return 0;
}

day02::output_t day02::expected_p2() {
	return 0;
}