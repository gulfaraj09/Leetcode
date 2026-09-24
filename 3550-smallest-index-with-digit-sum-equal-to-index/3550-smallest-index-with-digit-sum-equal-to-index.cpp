class Solution {
    int digitSum(int n){
        int ans = 0;
        while(n > 0){
            ans += n % 10;
            n /= 10;
        }
        return ans;
    }
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] < 10 && nums[i] == i) return i;
            else if(digitSum(nums[i]) == i) return i;
        }
        return -1;
    }
};