class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int i = *min_element(nums.begin(), nums.end()), j = *max_element(nums.begin(), nums.end());
        int k = 0, n = nums.size();
        vector<int> ans;
        sort(nums.begin(), nums.end());

        while(i <= j && k < n){
            if((nums[k] ^ i) != 0){
                ans.push_back(i);
            } else {
                k++;
            }
            i++;
        }
        return ans;
    }
};