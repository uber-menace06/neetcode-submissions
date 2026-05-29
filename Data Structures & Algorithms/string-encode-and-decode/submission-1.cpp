class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }

        vector<int> sizes;
        string res="";

        for(const auto &s: strs){
            sizes.push_back(s.length());
        }
        for(int size:sizes){
            res+= to_string(size)+',';
        }

        res+= '#';

        for(const auto& s: strs){
            res+=s;
        }

        return res;
    }

    vector<string> decode(string s) {

        if(s.empty()){
            return {};
        }
        int i=0;
        vector<int> sizes;
        vector<string> res;

        while(s[i]!='#'){
            string cur="";

            while(s[i]!=','){
                cur+=s[i];
                i++;
            }

            sizes.push_back(stoi(cur));
            i++;
        }
        i++;

        for(int size:sizes){
            res.push_back(s.substr(i, size));
            i+=size;
        }
        return res;
    }
};
