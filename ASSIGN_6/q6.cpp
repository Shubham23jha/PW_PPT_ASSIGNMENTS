class Solution {
public:
    vector<int> findOriginalArray(vector<int>& c) {
        vector<int>ans;
        vector<int>w;
        if(c.size()%2==1)return w;
        
        sort(c.begin(),c.end());
        unordered_map<int,int>map;
        for(auto i : c) map[i]++;
        
        for(auto i : c) {
            int cur = i;
            if(map[cur]){
                if(map[cur*2]==0) return w;
                ans.push_back(cur);
                map[cur]--;
                map[cur*2]--;
            }
        }
        return ans;
    }
};