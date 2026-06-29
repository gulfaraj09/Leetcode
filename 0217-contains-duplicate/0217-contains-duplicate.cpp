class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(int i:nums){
            if(hash[i])return true;
            hash[i]++;
        }
        return false;
    }
};