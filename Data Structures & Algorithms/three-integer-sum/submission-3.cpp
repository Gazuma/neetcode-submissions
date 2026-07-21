class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        map<int,set<vector<int>>> mp;
        int target = 0;
        int n = nums.size();
        for(int i =0;i<n-2;i++){
            int p1 = i+1;
            int p2 = n-1;
            while(p1<p2){
                int sum = nums[i] + nums[p1] + nums[p2];
                if(sum == 0){
                    vector<int> result = {nums[i],nums[p1],nums[p2]};
                    mp[i].insert(result);
                    p1++;
                    p2--;
                }
                else if (sum > 0){
                    p2--;
                }
                else if (sum < 0){
                    p1++;
                }
            }
        }
        vector<vector<int>> result;
        map<vector<int>,int> exists;
        for(auto x:mp){
            for(auto y:x.second){
                if(!exists[y]){
                    result.push_back(y);
                }
                exists[y]++;
            }
        }
        return result;
    }
};
