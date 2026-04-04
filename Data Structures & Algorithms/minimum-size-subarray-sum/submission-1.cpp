class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res = 100005;
        int left = 0;
        int sum = 0;
        for (int right = 0; right < nums.size(); ++right) {
            sum += nums[right];
            while (sum >= target) {
                res = min(res, right - left + 1);

                // for next iteration
                sum -= nums[left];
                ++left;
            }
        }
        return res < 100005? res: 0;
    }
};