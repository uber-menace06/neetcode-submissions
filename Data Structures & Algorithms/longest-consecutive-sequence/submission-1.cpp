class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> store(nums.begin(), nums.end());

        int res=0, curr=0, streak=0;

        for(int num:nums){
            curr= num;
            while(store.find(curr)!= store.end()){

                curr++;
                streak++;
            }
            res= max(res, streak);
            streak=0;
        }

        return res;
    }
};
