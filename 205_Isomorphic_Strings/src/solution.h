#pragma once

#include <iostream>

#include <string>
#include <map>
#include <set>

class Solution {
public:
    bool isIsomorphic(std::string s, std::string t) {
        if (s.length() != t.length()) {
			return false;
		}
		std::map<char, char> m1;
		std::map<char, char> m2;

		for (int i = 0; i < s.length(); ++i) {
			if ((m1.count(s[i]) and m1[s[i]] != t[i]) or ((m2.count(t[i]) and m2[t[i]] != s[i]))) {
				return false;
			}
			m1[s[i]] = t[i];
			m2[t[i]] = s[i];
		}
		return true;
    }
};