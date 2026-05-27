class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;

        for(const auto &s: strs){
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            map[sorted].push_back(s);
        }

        vector<vector<string>> res;

        for( auto& pair: map){
            res.push_back(pair.second);
        }
        return res;
    }
};
