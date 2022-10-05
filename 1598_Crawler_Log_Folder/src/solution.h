#pragma once

#include <vector>
#include <string>


class Solution {
public:
    int minOperations(std::vector<std::string>& logs) {
		int result {0};
		for (auto s: logs) {
			result += step(s);
			result = result >= 0 ? result : 0;
		}		
		return result;
    }

private:
	int step(std::string s) {
		if (s == "../") {
			return -1;
		}
		else if (s == "./") {
			return 0;
		}
		return 1;
	}
};