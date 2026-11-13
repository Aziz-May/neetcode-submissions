class TimeMap {
    private: unordered_map<string, vector<pair<string, int>>> timeMap;

public:
    TimeMap() {
        
        
    }
    // { alice : ({happy , 1 }, {sad , 3} {angry , 4} ) , bob : ({happy,5})}
    
    void set(string key, string value, int timestamp) {
        
        timeMap[key].push_back({value,timestamp}); // or even we can use makepair()
        
    }
    
    string get(string key, int timestamp) {
        ;
        
        auto it = timeMap.find(key);

        if (it == timeMap.end()) {
                return "";
        }

        const auto& val_times = it->second;

        int left = 0 ; 
        int  right = val_times.size();
        int mid=0 ;
        while(left<right){
            mid = left + (right-left)/2 ;
            if (val_times[mid].second == timestamp){
                return val_times[mid].first ;
            }else if(val_times[mid].second<timestamp){
                left = mid +1 ;
            }else{
                right = mid ;
            }
        }
        return left==0 ? "" :val_times[left-1].first ;
        
    }
};
