class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> mp;
        int count = 0;
        
        for(const auto &i : jewels){
            mp[i]++;
        }

        for(const auto &i : stones){
            if(mp[i] > 0) count++;
        }

        return count;
    }
};