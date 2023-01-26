#pragma once

#include <string>
#include <stack>
#include <utility>

class Solution {
public:
    std::string decodeString(std::string s) {
        std::string txt;
		int num { 0 };
		std::stack<std::pair<std::string, int>> st;
		for (char c: s) {
			if (std::isalpha(c)) {
				txt += c;
			}
			else if (std::isdigit(c)) {
				num = (num * 10) + (c - '0');
			}
			else if (c == '[') {
				st.push(std::pair<std::string, int>(txt, num));
				txt = "";
				num = 0;
			}
			else if (c == ']') {
				auto t = st.top();
				st.pop();
				std::string b;
				b = t.first;
				for (int i { 0 }; i < t.second; ++i) {
					b += txt;
				}
				txt = b;
			}
		}
		return txt;
    }
};
