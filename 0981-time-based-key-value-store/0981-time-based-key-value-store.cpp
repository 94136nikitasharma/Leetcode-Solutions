class TimeMap {
public:
    map<string,vector<pair<int,string>>>mpp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
       mpp[key].push_back({timestamp,value}) ;
    }
    
    string get(string key, int timestamp) {
        if(mpp.find(key)==mpp.end())
        {
            return "";
        }
        int l=0;
        int r=mpp[key].size()-1;
        if(mpp[key][0].first>timestamp)
        {
            return "";
        }
        string ans;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(mpp[key][mid].first==timestamp)
            {
                return mpp[key][mid].second;
            }
            else if(mpp[key][mid].first<timestamp)
            {
                ans=mpp[key][mid].second;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
            
        }
        return ans;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */