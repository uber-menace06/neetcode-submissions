class Solution {
public:
    int trap(vector<int>& height) {
        int leftmax, rightmax=0;
        int res= 0;

        if(height.empty()){
            return 0;
        }
        for(int i=0;i<height.size();i++){
            leftmax= height[i];
            rightmax= height[i];

            for(int j = 0; j< i;j++){
                leftmax = max(leftmax, height[j]);
            }

            for(int k = i+1; k< height.size();k++){
                rightmax = max(rightmax, height[k]);
            }

            res += min(leftmax, rightmax)- height[i];
        }
        return res;
    }
};
