class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int> mp;
        set<int> nums(arr.begin(),arr.end());
        int rank  = 1, n = arr.size();

        for(auto &i : nums){
            mp[i] = rank;
            rank++;
        }
        
        for(int i = 0; i < n; i++){
            arr[i] = mp[arr[i]];
        }

        return arr;
    }
};