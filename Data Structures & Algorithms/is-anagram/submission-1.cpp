class Solution {
public:
    bool isAnagram(string s, string t) {
        // num represent character, 0 for a and so on
        std::unordered_map<char, int> existed_s;
        std::unordered_map<char, int> existed_t;
        for (int i = 0; i < s.size(); i++) {
            if (existed_s.find(s[i]) == existed_s.end()) {
                // if not existed
                existed_s[s[i]] = 1;
            } else {
                existed_s[s[i]]++;
            }
        }

        for (int i = 0; i < t.size(); i++) {
            if (existed_t.find(t[i]) == existed_t.end()) {
                // if not existed
                existed_t[t[i]] = 1;
            } else {
                existed_t[t[i]]++;
            }
        }

        // first check the num of different chars
        if (existed_s.size() != existed_t.size())
            return false;
        
        for (auto &pair: existed_s) {
            if (existed_t[pair.first] != pair.second)
                return false;
        }
        
        return true;
        
    //     // // now check nums of 
    //     std::unordered_set<char> existed_s;
    //     std::unordered_set<char> existed_t;
    //     for (int i = 0; i < s.size(); i++) {
    //         if (!existed_s.count(s[i])) {
    //             // if not existed
    //             existed_s.insert(s[i]);
    //         }
    //         // otherwise do nothing
    //     }
    //     for (int i = 0; i < t.size(); i++) {
    //         if (!existed_t.count(t[i])) {
    //             // if not existed
    //             existed_t.insert(t[i]);
    //         }
    //         // otherwise do nothing
    //     }

    //     if (existed_s.size() != existed_t.size())
    //         return false;

    //     for (auto &ch: existed_t) {
    //         if (existed_s.find(ch) == 0) return false;
    //     }

    //     return true;
    }
};
