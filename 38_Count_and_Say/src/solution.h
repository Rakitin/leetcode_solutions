#pragma once

#include <iostream>

#include <string>
#include <list>
#include <utility>
#include <sstream>

class Solution {
public:
    std::string countAndSay(int n) {
		std::string result = "1";
        if (n == 1) {
			return result;
		}
		for (int i = 1; i < n; ++i) {
			result = helper(result);
		}
		return result;
    }
	
private:
	std::string helper(std::string num) {
		std::list<std::pair<char, int>> buf;
		std::pair<char, int> c(num[0], 1);
		for (int i = 1; i < num.length(); ++i) {
			if (c.first != num[i]) {
				buf.push_back(c);
				c.first = num[i];
				c.second = 1;
			}
			else {
				++c.second;
			}
		}
		buf.push_back(c);
		std::stringstream ss;
		for (auto n: buf) {
			ss << std::to_string(n.second) << n.first;
		}
		return ss.str();
	}
};