#pragma once

#include <string>
#include <map>
#include <stack>


class Solution {
public:
    bool isValid(std::string s) {
        std::map<char, char> parentheses {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };
        std::stack<char> st;
        for (auto c : s) {
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            }
            else if (c == ')' || c == ']' || c == '}') {
                if (st.empty()) {
                    return false;
                }
                if (st.top() == parentheses[c]) {
                    st.pop();
                }
                else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};
