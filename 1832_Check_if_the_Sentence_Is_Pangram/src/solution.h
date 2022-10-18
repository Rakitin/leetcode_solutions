#pragma once

#include <string>
#include <set>
#include <cctype>

// class Solution {
// public:
//     bool checkIfPangram(std::string sentence) {
// 		if (sentence.length() < ('z' - 'a') + 1) {
// 			return false;
// 		}
// 		std::set<char> st;
// 		for (char c: sentence) {
// 			st.insert(std::tolower(c));
// 			if (st.size() == ('z' - 'a') + 1) {
// 				return true;
// 			}
// 		}
// 		return false;
//     }
// };


class Solution {
public:
    bool checkIfPangram(std::string sentence) {
        bool is[('z' - 'a') + 1]{};
		for (char c: sentence) {
			is[std::tolower(c) - 'a'] = true;
		}
		for (bool f: is) {
			if (!f) {
				return false;
			}
		}
		return true;
    }
};
