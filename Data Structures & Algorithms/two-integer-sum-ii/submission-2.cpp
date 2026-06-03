class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> map;

        for(int i=0;i<numbers.size();i++){
            int diff= target- numbers[i];

            if(map.count(diff)){
                return {map[diff], i+1};
            }

            map[numbers[i]] = i+1;
        }
    }
};
