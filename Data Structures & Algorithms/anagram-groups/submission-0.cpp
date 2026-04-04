class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // transpose to string to be a key
        unordered_map<string, vector<string>> hash;
        // value is a list of string match that pattern

        for (const string &s: strs) {
            vector<int> count(26, 0); // must initiate to 0
            
            // traverse string
            for (const char &c: s) {
                count[c-'a']++;
            }
            
            // now I have count: vector of nums of char, char is indicate by index
            // transfer count: vector<int> to string
            string key; // this would be the key of hash
            key += to_string(count[0]);
            for (int i = 1; i < 26; i++) {
                key += "," + to_string(count[i]);
            }
            
            // attach to hash
            hash[key].push_back(s);
        }

        vector<vector<string>> res;
        for (auto &pair: hash) {
            // pair: (string, vector<string>)
            res.push_back(pair.second);
        }
        return res;
    }
};
