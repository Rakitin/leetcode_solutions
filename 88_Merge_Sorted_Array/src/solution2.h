#pragma once

#include <vector>
#include <algorithm>

class Solution2 {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int i;
        int j;
        for (i = m, j = 0; j < n; ++i, ++j) {
            nums1[i] = nums2[j];
        }
        std::sort(nums1.begin(), nums1.end());
    }
};
