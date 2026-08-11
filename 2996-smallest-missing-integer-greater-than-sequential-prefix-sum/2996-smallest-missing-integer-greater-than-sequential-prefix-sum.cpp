class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int i = 0, sum = nums[0];
        while(i < n - 1){
            if(nums[i] ==( nums[i + 1] - 1)){
                sum += nums[i+1];
            } else {
                break;
            }
            i++;
        }
        unordered_map<int,int> dp;
        for(const auto j: nums){
            dp[j] = j;
        }
        int ans = sum;
        i = 0;
        while(i < n){
            if(dp.find(sum) != dp.end()){
                sum += 1;
            } else {
                break;
            }
            i++;
        }
        return sum;
    }
};