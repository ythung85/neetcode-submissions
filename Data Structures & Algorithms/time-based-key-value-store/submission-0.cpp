class TimeMap { 

private:
    unordered_map<string, vector<pair<string, int>>> ks;
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        ks[key].emplace_back(value, timestamp);
    }
    
    string get(string key, int timestamp) {
        
        auto& value = ks[key];
        int l = 0 ;
        int r = value.size()-1;
        string result = "";

        while(l <= r){
            int m = l + (r-l)/2;
            if (value[m].second <= timestamp){
                result = value[m].first;
                l = m + 1;
            }else{
                r = m - 1;
            }
        }
        return result;

    }
};
