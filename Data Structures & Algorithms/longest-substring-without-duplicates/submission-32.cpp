class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0;
        int r = 0;
        int result = 0;
        int c = 0;
        map<char,int> mp;
        while(l<n and r<n and l<=r){
            c = 0;
            while(!mp[s[r]] and r<n){
                mp[s[r]]++;
                result = max(r-l+1,result);
                r++;
            }
            while(mp[s[r]] and r<n and l<n and l<=r){
                mp[s[l]]--;
                l++;
            }
            if(r==n){
                r--;
            }
            mp[s[r]]++;
            r++;
        }
        return result;
    }
};
