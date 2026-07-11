class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        unordered_map<int,int> vis;
        for(int i:arr){
            mp[i]++;
        }
        
        for(auto &i : mp){
            if(vis[i.second])return false;
            vis[i.second]++;
        }
        return true;
    }
};