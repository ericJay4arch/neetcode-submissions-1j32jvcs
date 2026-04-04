class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // record min, and max profit til then
        int min = 101, max_profit = 0;
        // max_profit must larger than 0
        for (int p: prices) {
            if (p - min > max_profit) max_profit = p - min;
            if (min > p) min = p;
        }
        return max_profit;
    }
};
