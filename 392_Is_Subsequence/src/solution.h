#pragma once

#include <iostream>

#include <string>

class Solution {
public:
    bool isSubsequence(std::string s, std::string t) {
        int pos = s.length() - 1;
		for (int i = t.length() - 1; i >= 0; --i) {
			if ( pos >= 0 and t[i] == s[pos]) {
				--pos;
			}
		}
		return pos < 0;
    }
};
