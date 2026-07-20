class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> count1,count2;
        for(auto x: s){
            count1[x]++;
        }

        for(auto x: t){
            count2[x]++;
        }
        if (s.size() != t.size()){
            return false;
        }
        for(auto x:count1){
            if(count2[x.first]!=x.second){
                return false;
            }
        }

        return true;
    }
};
