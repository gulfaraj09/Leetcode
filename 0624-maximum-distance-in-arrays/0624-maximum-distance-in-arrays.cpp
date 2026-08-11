class Solution {
public:
    int maxDistance(vector<vector<int>>& nums) {
        int max_value = nums[0][nums[0].size()-1], min_value = nums[0][0];
        int diff = 0;
        int n = nums.size();
        for(int i = 1; i < n; i++){
            int mx = nums[i][nums[i].size()-1], mn = nums[i][0];
            diff = max(diff , max(mx - min_value, max_value - mn));
            max_value = max(max_value,mx);
            min_value = min(min_value,mn);
        }
        return diff;
    }
};