class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> x;
        map<char,int> y;

        for(auto c: s){
            x[c]++;
        }

        for(auto c:t){
            y[c]++;
        }

        if(x.size()!=y.size()){
            return false;
        }

        for(auto p : x){
            if(y[p.first]!= p.second){
                return false;
            }
        }
        return true;
    }
};
