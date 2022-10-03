#pragma once

#include <iostream>
#include <string>



class Solution {
public:
    bool isPalindrome(std::string s) {
		int l = 0;
		int h = s.length() - 1;
		while (l < h) {
			if (!std::isalpha(s[l]) and !std::isdigit(s[l])) {
				++l;
				continue;
			}
			if (!std::isalpha(s[h]) and !std::isdigit(s[h])) {
				--h;
				continue;
			}
			if (std::tolower(s[l]) != std::tolower(s[h])) {
				return false;
			}
			++l;
			--h;
		}
		return true;
    }
};