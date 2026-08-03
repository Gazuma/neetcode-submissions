class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int> m1;
        map<char,int> m2;
        int n1,n2;
        n1 = s1.size();
        n2 = s2.size();
        int d1 = 0;
        int d2 = 0;
        for(auto x: s1 ){
            m1[x]++;
        }

        int l = 0;
        int r = 0;
        int n = s2.size();
        while(r<n){
            if(!m1[s2[r]]){
                r++;
                l = r;
            }
            else{
                map<char,int> t1 = m1;
                int tn1 = n1;
                while(r<n){
                    cout<<l<<" "<<r<<" "<<tn1<<endl;
                    for(auto x: t1){
                        cout<<x.first<<" : "<<x.second<<" ";
                    }
                    cout<<endl;
                    if(m1[s2[r]] and t1[s2[r]]){
                        t1[s2[r]]--;
                        tn1--;
                        r++;
                    }
                    else if(m1[s2[r]]){
                        if(t1[s2[l]]!=m1[s2[r]]){
                            t1[s2[l]]++;
                        }
                        tn1++;
                        l++;
                    }
                    else{
                        break;
                    }
                    if(tn1 == 0){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
