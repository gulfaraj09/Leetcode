class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        map<int,int> hashMap;
        for(int i=0;i<nums.size();i++){
            if(hashMap.contains(target-nums[i])){
                ans.push_back(i);
                ans.push_back(hashMap[target-nums[i]]);

            }
            hashMap[nums[i]] = i;
        }
        return ans;
    }
};