#pragma once

#include <string>
#include <algorithm>


class Solution {
public:
    bool isPalindrome(int x) {
        std::string str1{std::to_string(x)};
        std::string str2{str1};
        std::reverse(str2.begin(), str2.end());
        return str1 == str2;
    }
};
