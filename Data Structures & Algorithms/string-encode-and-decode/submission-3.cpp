class Solution {
public:

    string encode(vector<string>& strs) {
        // I would like to use num# encoding
        // traverse across strs and attach length before that
        string encoded;
        for (const auto &s: strs) {
            // encoded += to_string(s.size());
            // encoded.push_back('#');
            // encoded += s;
            encoded += to_string(s.size()) + "#" + s;
        }
        // when input = [], 0 loop and encoded will be empty
        return encoded;
    }

    vector<string> decode(string s) {
        // we use pos pointer(int) indicate position
        // use substr and atoi
        vector<string> res;
        // now res is empty, if s is empty, just return res
        

        int ptr = 0; // ptr is now pos, width is the length of len rep
        while (ptr < s.size()) {
            // now ptr is on the start of a num
            int width = 0;
            while (s[ptr+width] != '#') width++;

            int len = stoi(s.substr(ptr, width));

            res.push_back(s.substr(ptr+width+1, len));
            
            // update ptr
            ptr += width + len + 1;
        }

        return res;
    }
};
