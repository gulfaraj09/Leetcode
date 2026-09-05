class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefix_min(n);
        prefix_min[n - 1] = nums[n - 1];
        for(int i = n - 2; i >= 0 ; i--){
            prefix_min[i] = min(prefix_min[i+1],nums[i]);
        }

        int prefix_max = nums[0];
        for(int i = 0; i < n; i++){
            prefix_max = max(prefix_max, nums[i]);
            if(prefix_max - prefix_min[i] <= k) return i;
        }
        return -1;
    }
};