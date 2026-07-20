class Solution {
public:

    bool isAnagram(string word1, string word2){
        //checks if two strings are anagram of each other or not
        //count 1 + count 2 calculation
        // check distinct count
        // compare character-wise frequency
        int n1 = word1.size();
        int n2 = word2.size();
        map<char,int> m1,m2;
        for(auto x: word1){
            m1[x]++;
        }
        for(auto x: word2){
            m2[x]++;
        }
        if(m1.size()!=m2.size()){
            return false;
        }
        for(auto x:m1){
            if (m2[x.first]!=x.second){
                return false;
            }
        }
        return true;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //map of string to set of strings
        //result -> set of set of strings converted to vector of vector of strings
        set<vector<string>> finder;
        vector<vector<string>> result;
        map<string,int> exists;
        map<string,int> str_cnt;

        for(auto x: strs){
            str_cnt[x]++;
        }

        int n = strs.size();
        for(int i = 0; i<n;i++){
            vector<string> temp;
            for(int j = i; j<n; j++){
                if(isAnagram(strs[i],strs[j])){
                    if(exists[strs[j]]<str_cnt[strs[j]]){
                        exists[strs[j]]++;
                        temp.push_back(strs[j]);
                    }
                }
            }
            if(temp.size()){
                finder.insert(temp);
            }
        }
        for(auto x: finder){
            vector<string> tmp;
            for(auto y:x){
                tmp.push_back(y);
            }
            result.push_back(tmp);
        }
        return result;
    }
};
