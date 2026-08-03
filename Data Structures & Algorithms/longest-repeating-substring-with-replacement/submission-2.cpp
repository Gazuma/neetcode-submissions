class Solution {
public:

    int characterReplacement(string s, int k) {
        //check when string is empty

        // start with maximum window size
        // check max frequency element
        // if total - max frequency <=k then all good else
        // while that condition is not true l++
        int n = s.size();
        map<char,int> mp;
        for(auto x : s){
            mp[x]++;
        }

        int result = 0;

        for(auto x:mp){
            int l = 0;
            int r = 0;
            int count = 0;
            for(r = 0; r<n;r++){
                if(s[r]==x.first){
                    count+=1;
                }
                while ( (r-l+1) - count > k){
                    if(s[l]==x.first){
                        count--;
                    }
                    l++;
                }
                result = max(result,r-l+1);
            }
        }
                    return result;

        
    }
};
