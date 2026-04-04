class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // I will use min-heap here
        // whenever heap size > k, pop, at last k elements stay
        
        // at first, I will traverse and statistics to a hash
        unordered_map<int, int> hash; // key is the num, value is frequency
        // index is unimportant, use new for
        for (auto num: nums) {
            hash[num]++;
        }

        // now I have (num, freq) hash
        // define a heap
        priority_queue<pair<int, int>, vector<pair<int, int>>, 
                        greater<pair<int, int>> > heap;
        // greater for min-heap
        for (auto &p: hash) {
            // p: pair<int, int>
            // pair would compair by pair.first
            // so I should reverse it then push to heap
            pair<int, int> tmp(p.second, p.first);
            heap.push(tmp);
            if (heap.size() > k) heap.pop();
        }

        // now we could push to res via heap
        vector<int> res;
        for (int i = 0; i < k; i++) {
            res.push_back((heap.top()).second);
            heap.pop();
        }
        return res;
    }
};
