class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        for(auto &i : nums){
            if(i < 0)
                i *= - 1;
        }

        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long ans = ((long long) nums[n - 1] *(long long) nums[n - 2] * (long long) 100000);

        return ans;
    }
};