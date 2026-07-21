class Solution {
public:
    bool isPalindrome(string s) {
        int n =  s.size();
        int p1 = 0;
        int p2 =n-1;
        if(n==1){
            return true;
        }
        while(p1<=p2){
            if(tolower(s[p1])==tolower(s[p2])){
                p1++;
                p2--;
            }
            else if(!isalnum(s[p1])){
                p1++;
            }
            else if(!isalnum(s[p2])){
                p2--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
