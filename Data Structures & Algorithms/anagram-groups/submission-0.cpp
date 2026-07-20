class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>,vector<string>> groupedResult;

        for(auto x: strs){
            map<char,int> freq;
            for(auto y:x){
                freq[y]++;
            }
            groupedResult[freq].push_back(x);
        }

        vector<vector<string>> result;
        
        for(auto x: groupedResult){
            result.push_back(x.second);
        }
        return result;
    }
};
