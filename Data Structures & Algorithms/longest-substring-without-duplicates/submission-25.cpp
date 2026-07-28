class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0;
        int r = 0;
        int result = 0;
        while(r<n){
            map<char,int> mp;
            int c = 0;
            while(!mp[s[r]] and r<n){
                mp[s[r]]++;
                c++;
                    r++;
            }
            result = max(c,result);

            l=l+1;
            r=l;
        }
        return result;
    }
};
