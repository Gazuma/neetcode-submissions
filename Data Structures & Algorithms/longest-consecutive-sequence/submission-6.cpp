class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int result = 0;
        int i =0;
        int n = nums.size();
        int distinct_nums = 0;
        map<int,int> mp;
        for(auto x: nums){
            if(mp[x]==0){
                distinct_nums++;
            }
            mp[x]++;
        }
        if(distinct_nums == 1){
            return 1;
        }
        if(n==0){
            return 0;
        }
        int temp = 1;
        
        while(i<n-1){
            if(nums[i+1]-nums[i]==1){
                temp++;
                result = max(result,temp);
                cout<<result<<" ";
            }
            else if(nums[i]!=nums[i+1]){
                cout<<endl<<nums[i+1]<<" "<<nums[i]<<endl;
                temp = 1;
            }
            i++;
        }
        result = max(temp,result);
        return result;
        // map<int,int> freqMap;
        // for(auto x:nums){
        //     freqMap[x]++;
        // }

        // vector<int> sorted;
        // for(auto x:freqMap){
            
        // }
    }
};
