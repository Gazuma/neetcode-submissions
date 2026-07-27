class TimeMap {
public:
    map<string,vector<pair<int,string>>> mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        pair<int,string> temp = {timestamp,value};
        mp[key].push_back(temp);
    }
    
    string get(string key, int timestamp) {
        if(mp[key].size()==0){
            return "";
        }
        vector<pair<int,string>> elements = mp[key];

        int n = elements.size();
        int p1 = 0;
        int p2 = n - 1;

        if(timestamp<elements[p1].first ){
            return "";
        }

        if(timestamp>elements[p2].first){
            return elements[p2].second;
        }

        while(p1<p2){
            int mid = p1 + (p2 - p1)/2;

            if(elements[mid].first == timestamp){
                return elements[mid].second;
            }
            else if (elements[mid].first < timestamp){
                if(elements[mid+1].first > timestamp){
                    return elements[mid].second;
                }
                p1 = mid+1;
            }
            else{
                p2 = mid-1;
            }
        }
        if(p1 == p2){
            if(elements[p1].first){
                return elements[p1].second;
            }
        }
        return "";
    }
};
