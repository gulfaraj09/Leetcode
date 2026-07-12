class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());

        for(int i = 0; i < n; i++){
            int target = 0 - nums[i];
            int left = i+1, right = n-1;
            if(i > 0 && nums[i] == nums[i-1])
                continue;

            while(left < right){
                if(right != n-1 && left != i+1 && (nums[left-1] == nums[left] && nums[right+1] == nums[right])){
                        left ++; right--;
                } else if(nums[left] + nums[right] == target){
                    vector<int> temp(3);
                    temp[0] = nums[i];
                    temp[1] = nums[left];
                    temp[2] = nums[right];
                    ans.push_back(temp);
                    right--; left++;
                } else if(nums[left] + nums[right] < target){
                    left++;
                } else {
                    right--;
                }
            }
        }
        return ans;
    }
};