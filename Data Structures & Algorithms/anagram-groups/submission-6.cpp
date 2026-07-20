class Solution {
public:
    //anagram method
    //map of pattern to vector
    //pattern is also a map
    map<char,int> getFrequencyCount(string s){
        map<char,int> result;
        for(auto x: s){
            result[x]++;
        }
        return result;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>,vector<string>> mp;
        for(auto x: strs){
            mp[getFrequencyCount(x)].push_back(x);
        }
        vector<vector<string>> result;
        for(auto x: mp){
            result.push_back(x.second);
        }
        return result;
    }
};
