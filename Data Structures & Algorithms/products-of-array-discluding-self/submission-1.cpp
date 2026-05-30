class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p=1;
        int zeroCount=0;

        for(int num: nums){

            if(num!=0){
                p*=num;
            } else{
                zeroCount++;
            }
        }

        if(zeroCount>1){
            return vector<int>(nums.size(),0);
        }

        vector<int> res(nums.size());

        for(int i=0;i<nums.size();i++){
            if(zeroCount==1) {

                res[i] = (nums[i]==0)? p: 0;
            } else{

                res[i] =  p/nums[i];
            }
        }
        return res;
    }
};
