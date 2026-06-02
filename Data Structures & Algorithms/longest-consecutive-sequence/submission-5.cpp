class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> store(nums.begin(), nums.end());

        int streak=0; int curr=0; int res=0;

        for(int num:nums){

            if(store.find(num-1)==store.end()){

                curr= num;
                streak=1;

                while(store.find(curr +1)!= store.end()){
                    streak++;
                    curr++;

                }

                res= max(res, streak);
            }
        }
        return res;
    }
};
