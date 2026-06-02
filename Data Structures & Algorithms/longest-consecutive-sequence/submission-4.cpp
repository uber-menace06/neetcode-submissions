class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int res=1; int streak=1; 
        int i=0;

        for(int i=1; i<nums.size();i++){

            if(nums[i] == nums[i-1]){
                continue;
            }
            if(nums[i] == nums[i-1]+1){
                streak++;
            }
            else{
                streak=1;
            }
            res = max(res, streak);
        }

        return res;
    }
};
