class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        map<float,float,greater<float>> mp;
        stack<float> st;
        unsigned long result = 0;
        for(int i =0;i<n;i++){
            float dist = (target-position[i]);
            float spd = speed[i];
            float time = dist/spd;
            mp[position[i]]= time;
        }

        for(auto x: mp){
            cout<<x.first<<" "<<x.second<<endl;
            if(st.size() and st.top()<x.second){
                st.push(x.second);
            }
            else if (st.size()==0){
                st.push(x.second);
            }
            result = max(st.size(),result);
        }
        return result;
    }
};
