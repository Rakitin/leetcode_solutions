#pragma once

#include <iostream>

#include <vector>
#include <string>
#include <algorithm>
#include <sstream>


class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        if (strs.empty()) {
            return "";
        }

        std::string result{strs[0]};
        for (int i = 1; i < strs.size(); ++i) {
            result = prefix(result, strs[i]);
        }
        return result;
    }

private:
    std::string prefix(const std::string &a, const std::string &b) {
        if (a == b) {
            return a;
        }

        std::stringstream ss;
        for (int i = 0; i < std::min(a.length(), b.length()); ++i) {
            if (a[i] != b[i]) {
                break;
            }
            ss << a[i];
        }
        return ss.str();
    }
};
