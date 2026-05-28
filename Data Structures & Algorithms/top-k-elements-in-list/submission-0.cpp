class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;

        for(int num:nums){
            map[num]++;
        }

        vector<pair<int, int>> arr;

        for(const auto&s : map){
            arr.push_back({s.second, s.first});//ulte dilam pair e
        }

        sort(arr.rbegin(), arr.rend());

        vector<int> res;

        for(int i=0;i<k;i++){
            res.push_back(arr[i].second);
        }
        return res;
    }
};
