class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());

        for(int i = 0; i < n; i++){
            int num1 = nums[i];
            if(i > 0 && nums[i] == nums[i-1])
                continue;
            
            for(int j = i+1; j < n; j++){
                int num2 = nums[j], left = j + 1, right = n - 1;
                // long long sum = (target - (num1 + num2));
                if(j != i+1 && nums[j] == nums[j-1])
                    continue;
                while(left < right){
                    double sum = (double)nums[i] + (double)nums[j] + (double)nums[left] + (double)nums[right];
                    if(left != j+1 && right != n-1 && (nums[left] == nums[left-1])
                     && (nums[right] == nums[right+1])){
                        right--; left++;
                    } else if(sum == target){
                        vector<int> temp{num1, num2, nums[left], nums[right]};
                        ans.push_back(temp);
                        left++; right--;
                    } else if(sum < target){
                        left++;
                    } else{
                        right--;
                    }
                }
            }
        }

        return ans;
    }
};