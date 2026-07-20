class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        unordered_map<int,int> mp;
        int min = nums[0];
        int max = nums[0];
        
        for (auto x: nums){
            if(min>x){
                min = x;
            }
            if(max<x){
                max = x;
            }
            mp[x]=1;
        }

        int result = 0;
        int temp = 0;
        cout<<endl;
        for(int i = min; i<=max+1;i++){
            //cout<<i<<" "<<mp[i]<<endl;
            if(mp[i]){
                //cout<<mp[i]<<" ";
                temp++;
            }
            else {
                result = result > temp ? result : temp;
                temp = 0;
            }   
        }
        return result;
    }
};
