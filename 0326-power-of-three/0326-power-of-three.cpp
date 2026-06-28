class Solution {
public:
    bool isPowerOfThree(int n) {
        // 3 --- 11
        // 9 --- 1001
        // 27 ---11011
        // 1101
        return (n > 0 and (1162261467 % n == 0));
    }
};