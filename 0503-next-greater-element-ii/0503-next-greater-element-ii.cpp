class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,-1);
        stack<int> stk;
        stk.push(0);
        int prev = stk.top();

        for(int i = 1; i < 2*n; ++i){
            while(!stk.empty() && nums[stk.top()] < nums[i%n]){
                prev = stk.top();
                stk.pop();
                ans[prev] = nums[i%n];
            }
            if(i<n){
                stk.push(i);
            }
        }
        return ans;
    }
};