class Solution {
public:
    int characterReplacement(string s, int k) {
        // 左指针left，右指针right
        // 满足条件时移动右指针，满足条件时在循环内while移动左指针
        // 条件为：新加的字符为最频繁出现的字符 或 不是但是没有超过k
        // 在判断这个条件之前要先更新最频繁出现的字符
        int left = 0;
        int maxLen = k;
        // int curLen = 0;
        vector<int> count_char(26, 0); // recording the f
        

        for (int right = 0; right < s.size(); ++right) {
            count_char[s[right]-'A']++;
            int maxf = 0;
            for (int c: count_char) {
                maxf = max(maxf, c);
            }
            
            while ((right-left+1) - maxf > k) {
                // move left
                count_char[s[left++]-'A']--;

                // update maxf
                maxf = 0;
                for (int c:count_char) {
                    maxf = max(maxf, c);
                }

            }

            maxLen = max(right-left+1, maxLen);
        }

        return maxLen;
    }
};
