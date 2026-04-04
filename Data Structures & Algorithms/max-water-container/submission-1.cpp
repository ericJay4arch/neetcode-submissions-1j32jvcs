class Solution {
public:
    int maxArea(vector<int>& heights) {
        // the only possible direction is where the smallest change
        int left = 0, right = heights.size() - 1;
        int max_area = 0;

        while (left < right) {
            // choose left or right pointer to move
            int current_area = 0;
            if (heights[left] < heights[right]) {
                // compute current with left
                current_area = heights[left] * (right - left);
                // move left
                left++;
            } else {
                current_area = heights[right] * (right - left);
                right--;
            }
            if (max_area < current_area) max_area = current_area;
        }

        return max_area;
    }
};
