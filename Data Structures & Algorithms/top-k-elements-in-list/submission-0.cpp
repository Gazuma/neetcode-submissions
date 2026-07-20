class Solution {
public:
    //key -> frequency of that element
    // value -> vector of elements with that frequency
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,vector<int>, greater<int>> freqSet;
        map<int,int> freqMap;
        for(auto x:nums){
            freqMap[x]++;
        }

        for(auto x: freqMap){
            freqSet[x.second].push_back(x.first);
        }

        vector<int> result;
        for(auto x: freqSet){
            for(auto y: x.second){
                if(result.size()>=k){
                    break;
                }
                else{
                    result.push_back(y);
                }
            }
            if(result.size()>=k){
                break;
            }
        }
        return result;
    }
};
