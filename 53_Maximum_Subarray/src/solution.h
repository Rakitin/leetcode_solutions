#pragma once

#include <vector>
#include <algorithm>


class Solution {
public:
	int maxSubArray(std::vector<int>& nums) {
		int t { nums[0] };
		int result { nums[0] };
		for (int i { 1 }; i < nums.size(); ++i) {
			t = std::max<int>(t + nums[i], nums[i]);
			result = std::max<int>(result, t);
		}
		return result;
	}
};



// #include <algorithm>
// #include <limits>

// class Solution {
// public:
//     int maxSubArray(std::vector<int>& nums) {
//         int result { std::numeric_limits<int>::min() };
		
// 		for (int b { 0 }; b < nums.size(); ++b) {
// 			int sum { 0 };
// 			for (int e { b }; e < nums.size(); ++e) {
// 				sum += nums[e];
// 				result = std::max<int>(result, sum);
// 			}
// 		}
// 		return result;
//     }
// };
