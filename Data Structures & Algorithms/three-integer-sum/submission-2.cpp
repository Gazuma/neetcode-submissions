class Solution {
public:

    vector<int> generateResult(int a, int b, int c){
        vector<int> result;
        result.push_back(a);
        result.push_back(b);
        result.push_back(c);
        return result;
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> result;
        map<vector<int>,int> exists;
        for(int i = 0;i<n-1;i++){
            int target = -(nums[i]);
            int l = i+1;
            int r = n - 1;
            while(l<r){
                int sum = nums[l] + nums[r];
                if(sum == target){
                    vector<int> res = generateResult(nums[i],nums[l],nums[r]);
                    if(!exists[res]){
                        result.push_back(res);
                        exists[res]++;
                    }
                    r--;
                } 
                else if (sum > target){
                    r--;
                }
                else if (sum < target){
                    l++;
                }
            }
        }
        return result;
    }
};
