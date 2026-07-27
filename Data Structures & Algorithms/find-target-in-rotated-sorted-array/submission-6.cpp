class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int p1 = 0;
        int p2 = n-1;

        while(p1<p2){
            int mid = p1 + (p2-p1)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>nums[p2]){
                if(target>nums[mid] or target<=nums[p2]){
                    p1 = mid + 1;
                }
                else{
                    p2 = mid-1;
                }
            }
            else if (nums[mid]<nums[p2]){
                if(nums[mid]<=target and target <= nums[p2]){
                    p1 = mid+1;
                }
                else{
                    p2 = mid-1;
                }
            }
        }
        if(nums[p1]==target){
            return p1;
        }
        return -1;
    }
};
