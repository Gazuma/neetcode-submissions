class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n =numbers.size();
        int p1 = 0;
        int p2 = n-1;
        while(p1<=p2){
            int sum = numbers[p1]+numbers[p2];
            if(sum==target){
                vector<int> result = {1+p1,1+p2};
                return result;
            }
            else if(sum>target){
                p2--;
            }
            else if(sum<target){
                p1++;
            }
        }
    }
};
