class Solution {
public:
    bool isPalindrome(string s) {
        // create a string with only alnum
        string s_alnum;
        for (char c: s) {
            if (isalnum(c)) {
                s_alnum.push_back(tolower(c));
            }
        }
        return s_alnum == string(s_alnum.rbegin(), s_alnum.rend());
    }
};
