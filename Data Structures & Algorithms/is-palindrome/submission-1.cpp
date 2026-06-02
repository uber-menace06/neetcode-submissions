class Solution {
public:
    bool isPalindrome(string s) {
        int l=0;
        int r= s.length()-1;

        if(s.empty()){
            return true;
        }

        for(char &c:s){
            c= tolower(c);
        }
        while(l<r){

            if(!isalnum(s[l])){
                l++;
                continue;
            }
            if(!isalnum(s[r])){
                r--;
                continue; 
                
            } else if(s[l]==s[r]){
                l++;
                r--;
            } else{
                return false;
            }
        }

        return true;
    }
};
