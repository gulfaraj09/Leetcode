class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int flag = 0;
        bool zeros = true;
        for(auto i: nums){
            flag = i ^ flag;
            if(i != 0) zeros = false;
        }
        if(zeros)return 0;
        return (flag==0)? n-1: n;
    }
};