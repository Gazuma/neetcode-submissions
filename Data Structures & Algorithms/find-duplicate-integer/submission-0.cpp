class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(auto x:nums){
            if(mp[x]){
                return x;
            }
            mp[x]++;
        }
    }
};
