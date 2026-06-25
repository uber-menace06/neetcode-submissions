class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res=0;

        for(int i=0;i<heights.size();i++){
            for(int j=i+1;j<heights.size();j++){

                res= max(res,min(heights[j], heights[i])* (j-i));
            }
        }
        return res;
    }
};
