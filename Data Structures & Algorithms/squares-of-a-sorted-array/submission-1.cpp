class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        vector<int> res(nums.size(), 0);
        for (int p = nums.size() - 1; p >= 0; --p) {
            if (nums[left]*nums[left] >= nums[right]*nums[right]) {
                res[p] = nums[left]*nums[left];
                ++left;
            } else {
                res[p] = nums[right]*nums[right];
                --right;
            }
        }
        return res;
    }
};