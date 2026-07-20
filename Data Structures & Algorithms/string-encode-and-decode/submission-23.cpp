class Solution {
public:

    string encode(vector<string>& strs) {
        string result;
        int n = strs.size();
        for(int i = 0;i<n;i++){
                result +=  to_string(strs[i].size()) + "#" + strs[i];
        }
        cout<<result<<endl;
        return result;
    }

    vector<string> decode(string s) {
        int n = s.size();
        vector<string> result;
        string charCount;
        int count;
        int i = 0;
        while(i<n){
            if(s[i]!='#'){
                charCount += s[i++];
            }
            else{
                i++;
                count = stoi(charCount);
                cout<<count<<endl;
                string temp = "";
                while(count--){
                    temp+=s[i];
                    i++;
                }
                cout<<temp<<endl;
                result.push_back(temp);
                charCount = "";
            }
            
        }
        return result;
    }
};
