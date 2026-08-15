class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        map<int, int> mp;
        int ans = 0;
        for(const auto i : nums){
            if(!mp.empty() && (mp[i] ^ i == 0)) ans ^= i;
            mp[i] = i;
        }
        return ans;
    }
};