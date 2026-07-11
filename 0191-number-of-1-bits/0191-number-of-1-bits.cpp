class Solution {
public:
    int hammingWeight(int n) {
        return __builtin_popcount(n^0);
    }
};