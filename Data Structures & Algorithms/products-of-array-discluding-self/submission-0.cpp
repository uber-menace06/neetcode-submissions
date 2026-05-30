class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> res;
    
        for(int i=0;i<nums.size();i++){
            int p=1;
            for(int j=0;j<nums.size();j++){

                if(j!=i){

                    p*=nums[j];
                }
            }

            res.push_back(p);
        }

        return res;
    }
};
