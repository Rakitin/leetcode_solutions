#pragma once

#include <string>
#include <vector>
#include <map>
#include <algorithm>

class Solution {
public:
    std::vector<std::string> topKFrequent(std::vector<std::string>& words, int k) {
		std::map<std::string, int> c;
		for (auto word: words) {
			++c[word];
		}
		std::vector<std::pair<std::string, int>> tmp;
		for (auto p: c) {
			tmp.push_back(p);
		}
		std::sort(std::begin(tmp), std::end(tmp), [](std::pair<std::string, int> a, std::pair<std::string, int> b){
			if (a.second == b.second) {
				return a.first < b.first;
			}
			return a.second > b.second;
		});
        std::vector<std::string> result(k);
		for (int i = 0; i < k; ++i) {
			result[i] = tmp[i].first;
		}
		return result;
    }
};