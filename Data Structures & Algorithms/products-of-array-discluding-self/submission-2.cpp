class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long int prod = 1;
        int zero_count = 0;
        for(auto x: nums){
            if(x!=0){
                prod*=x;
            }
            else{
                zero_count++;
            }
        }
        vector<int> result;
        cout<<zero_count;
        for(auto x: nums){
            if(zero_count>1){
                result.push_back(0);
            }
            else{
                if(x==0){
                    result.push_back(prod);
                }
                else if(zero_count==1){
                    result.push_back(0);
                }
                else{
                    result.push_back(prod/x);
                }
            }

        }
        return result;
    }
};
