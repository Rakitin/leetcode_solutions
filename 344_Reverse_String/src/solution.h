#pragma once

#include <vector>
#include <algorithm>

class Solution {
public:
    void reverseString(std::vector<char>& s) {
       for (int i {0}; i < (s.size() / 2); ++i) {
			std::swap<char>(s[i], s[s.size() - i - 1]);
	   } 
    }
};