#pragma once

#include <vector>

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        if (!n) {
            return;
        }

        int cm {0};
        int cn {0};
        while (cm < m || cn < n) {
            if (cm < m && cn < n && nums1[cm] <= nums2[cn]) {
                ++cm;
                continue;
            }
            else if (cn < n) {
                int i = nums1.size() - 1;
                while (i > cm) {
                    nums1[i] = nums1[i - 1];
                    --i;
                }
                ++m;
                nums1[cm] = nums2[cn];
                ++cm;
                ++cn;
            }
            else {
                return;
            }
        }
    }
};
