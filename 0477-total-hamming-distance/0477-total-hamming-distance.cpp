class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int ans = 0, n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                ans += __builtin_popcount(nums[i] ^ nums[j]);
            }
        }
        return ans;
    }
};