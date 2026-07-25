class Solution {
public:
    int maxProduct(int n) {
        vector<int> nums;

        while(n>0){
            nums.push_back(n%10);
            n /= 10;
        }
        int len = nums.size();
        sort(nums.begin(), nums.end());
        return nums[len - 1] * nums[len - 2];
    }
};