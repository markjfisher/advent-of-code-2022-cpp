#include "day00.h"

#include <iostream>
#include <algorithm>

#include "../aoc2022.h"
#include "../util.h"

day00::input_t day00::parse(const parse_t& input) {
	input_t res(input.size());
	std::ranges::transform(input, res.begin(), [](auto&& str) { return std::stoi(str); });
	return res;
}
// can use the += on a pair<int,int> to accumulate the values
// foo += bar; // will add into foo the values from bar (both pair<int,int>)
auto& operator+=(std::pair<int, int>& left, const std::pair<int, int>& right) {
	left.first += right.first;
	left.second += right.second;
	return left;
}

// More parsing examples. Takes 
//day00:input_t day00::parse(const parse_t& input) {
//	input_t res(input.size());
//	std::ranges::transform(input, res.begin(), [](auto&& str) {
//		auto&& v = split_str(str, " ");
//		int amount = std::strtol(&*v[1].begin(), nullptr, 10);
//		if (str[0] == 'f') return std::make_pair(amount, 0);
//		else if (str[0] == 'd') return std::make_pair(0, amount);
//		return std::make_pair(0, -amount);
//		});
//	return res;
//}


day00::output_t day00::first_part(const day00::input_t& input) {
	return 0;
}

day00::output_t day00::second_part(const day00::input_t& input) {
	return 0;
}

day00::output_t day00::expected_p1() {
	return 0;
}

day00::output_t day00::expected_p2() {
	return 0;
}