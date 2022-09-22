#pragma once

#include <iostream>
#include <string>

class Solution {
public:
    bool backspaceCompare(std::string s, std::string t) {
        int i = s.length() - 1;
        int j = t.length() - 1;
        // int backspace1 = 0;
        // int backspace2 = 0;

        while (i >= 0 && j >= 0) {
            int backspace = 0;
            while (i >= 0) {
                if (s[i] == '#') {
                    backspace++;
                }
                else if (backspace) {
                    backspace--;
                }
                else {
                    break;
                }
                i--;
            }

            backspace = 0;
            while (j >= 0) {
                if (t[j] == '#') {
                    backspace++;
                }
                else if (backspace) {
                    backspace--;
                }
                else {
                    break;
                }
                j--;
            }
             if (i >= 0 && j >= 0) {
                if (s[i] != t[j]) {
                    return false;
                }
             }
            i--;
            j--;
        }

        return i==j;
    }
};
