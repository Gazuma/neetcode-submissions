class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast = nums[nums[0]];
        int slow = nums[0];
        while(nums[fast]!=nums[slow]){
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        int slow2 = 0;
        while(nums[slow]!=nums[slow2]){
            slow = nums[slow];
            slow2 = nums[slow2];
        }
       //cout<<fast<<" "<<slow<<endl;
        return nums[slow];
    }
};
