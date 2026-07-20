class Solution {
public:
    // <<STRING>><<STRING>><<STRING>>
    string encode(vector<string>& strs) {
        string result;
        //prefix will be the count of characters to go further to get that complete element
        //stoi -> string to int
        //to_string -> int to string
        for(auto x: strs){
            string temp = to_string(x.size()) + "___" + x;
            result += temp;
        }
        return result;
    }

    vector<string> decode(string s) {
        int n = s.size();
        vector<string> result;
        //step 1 -> read the number of characters by first letter
        // step 2 -> get the string using n
        // step 3 -> push it to result
        //5Hello5World -> 5 
        int i = 0;
        while(i<n){
            string steps_string = "";
            while('0'<= s[i] and s[i] <= '9'){
                steps_string += s[i];
                i++;
            }
            int steps = stoi(steps_string);
            i+=2;
            string temp = "";
            if(steps!=0){
                for(int j = i+1; j<=i+steps;j++){
                    temp += s[j];
                }
            }
            i+=steps+1;
            result.push_back(temp);
            // cout<<temp<<" "<<i<<endl;
        }
        return result;
    }
};
