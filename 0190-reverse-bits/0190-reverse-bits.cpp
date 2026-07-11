class Solution {
public:
    int reverseBits(int n) {
        int result = 0;
        for (int i = 0; i < 32; ++i) {
            result = (result << 1) | (n & 1); // Extract last bit, append to result
            n >>= 1;                          // Move to next bit
        }
        return result;
    }
};