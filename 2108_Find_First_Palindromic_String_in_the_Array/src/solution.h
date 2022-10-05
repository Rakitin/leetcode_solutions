#pragma once

#include <vector>
#include <string>

class Solution {
public:
    std::string firstPalindrome(std::vector<std::string>& words) {
		for (auto s: words) {
			if (isPalindrome(s)) {
				return s;
			}
		}
        return "";
    }
	
private:
	bool isPalindrome(std::string s) {
		int l = 0;
		int h = s.length() - 1;
		while (l < h) {
			if (s[l] != s[h]) {
				return false;
			}
			++l;
			--h;
		}
		return true;
	}
};