class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;
        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }

        vector<int> ans(2);
        bool flag = true;
        for(int i = 1; i <= n; i++){
            auto it = mp.find(i);
            if(it != mp.end() && it->second > 1){
                ans[0] = i;
            }
            if(it == mp.end()){
                ans[1] = i;
            }
        }
        return ans;
    }
};