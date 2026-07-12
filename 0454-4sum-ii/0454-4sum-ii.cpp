class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n = nums1.size(), ans = 0;
        unordered_map<int,int> mp;

        for(const auto &i : nums1){
            for(const auto &j: nums2){
                mp[i+j]++;
            }
        }

        for(const auto &i : nums3){
            for(const auto &j : nums4){
                int num = -(i+j);
                if(mp.contains(num)){
                    ans += mp[num];
                }
            }
        }
        return ans;
    }
};