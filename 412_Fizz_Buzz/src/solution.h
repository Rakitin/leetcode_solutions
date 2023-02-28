#pragma once

#include <vector>
#include <string>

class Solution {
public:
    std::vector<std::string> fizzBuzz(int n) {
        std::vector<std::string> answer;
		for (int i { 1 }; i <= n; ++i) {
			if (!(i % 3) and !(i % 5)) {
				answer.push_back("FizzBuzz");
			}
			else if (!(i % 3)) {
				answer.push_back("Fizz");
			}
			else if (!(i % 5)) {
				answer.push_back("Buzz");
			}
			else {
				answer.push_back(std::to_string(i));
			}
		}
		return answer;
    }
};
