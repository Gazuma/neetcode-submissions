class Solution {
public:
    void printStack(stack<pair<int,int>> st){
        while(!st.empty()){
            cout<<st.top().first<<" "<<st.top().second<<endl;
            st.pop();
        }
        cout<<"DONE"<<endl;
    }

    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> st;
        int i = 0;
        int n =temperatures.size();
        vector<int> result(n,0);
        for(int i =0;i<n;i++){
            pair<int,int> temp = {temperatures[i],i};
                while(st.size() > 0 and st.top().first<temperatures[i]){
                    pair<int,int> ptop = st.top();
                    st.pop();
                    result[ptop.second] = i - ptop.second;
                }
                st.push(temp);
        }
            //printStack(st);
            return result;
        }


    };
