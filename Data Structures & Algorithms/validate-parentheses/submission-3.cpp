class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        map<char,char> mp = {{'{','}'},{'(',')'},{'[',']'}};

        for(auto x: s){
            if(mp[x]){
                st.push(x);
            }
            else{
                if(st.size() and x==mp[st.top()] ){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(st.size()){
            return false;
        }
        return true;
    }
};
