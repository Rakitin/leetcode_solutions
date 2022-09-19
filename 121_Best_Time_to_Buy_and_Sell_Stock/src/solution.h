#pragma once

#include <vector>


class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        if (!prices.size()) {
            return 0;
        }
        int profit = 0;
        int bestPrice = prices[0];
        for (int i = 1; i < prices.size(); ++i) {
            if (bestPrice > prices[i]) {
                bestPrice = prices[i];
            }
            else {
                profit = std::max(profit, prices[i] - bestPrice);
            }
        }
        return profit;
    }
};
