class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hashMap;
        for(int i=0;i<nums.size();i++){
            int comp = target - nums[i];
            if(hashMap.contains(comp)){
                return {hashMap[comp],i};
            }
            hashMap[nums[i]] = i;
        }
        return {};
    }
};