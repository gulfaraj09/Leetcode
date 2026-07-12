class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        // Maps the sum (nums[i] + nums[j]) to its frequency
        unordered_map<int, int> mp;

        // k acts as the middle split between the left side (i, j) and right side (k, d)
        for (int k = 1; k < n; k++) {
            
            // 1. As k moves right, the index (k-1) becomes the new 'j'.
            // Pair this new 'j' with all valid 'i' indices to its left.
            int j = k - 1;
            for (int i = 0; i < j; i++) {
                mp[nums[i] + nums[j]]++;
            }

            // 2. Look for valid 'd' indices to the right of 'k'
            for (int d = k + 1; d < n; d++) {
                int target = nums[d] - nums[k];
                if (mp.contains(target)) {
                    ans += mp[target];
                }
            }
        }

        return ans;
    }
};
