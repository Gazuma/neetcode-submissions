class Solution {
public:
    unsigned long long int ceil_sum(vector<int> arr, double search_term){
        unsigned long long int result = 0;
        for(auto x: arr){
            result += ceil(x/search_term);
        }
        return result;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int p1 = 1;
        int p2 = *max_element(piles.begin(),piles.end());
        int k = INT_MAX;
        bool solved = false;
        while(p1<=p2){
            int mid = (p1+p2)/2;
            unsigned long long int temp = ceil_sum(piles,mid);
            if(temp<=h){
                k = min(k,mid);
                p2 = mid - 1;
            }
            else{
                p1 = mid + 1;
            }
        }
        return k;
    }
};
