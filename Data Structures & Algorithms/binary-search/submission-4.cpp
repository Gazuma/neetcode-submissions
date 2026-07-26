class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int p1 = 0;
        int p2 = n-1;

        while(p1<=p2){
            int mid = p1 + (p2-p1)/2;
            
            if(nums[mid]==target){
                cout<<nums[mid]<<" "<<target<<endl;
                return mid;
            }
            else if (nums[mid]<target){
                p1 = mid+1;
            }
            else{
                p2 = mid-1;
            }
            cout<<p1<<" "<<p2<<" "<<nums[mid]<<" "<<target<<endl;
        }
        return -1;
    }
};
