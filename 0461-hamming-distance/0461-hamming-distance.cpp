class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0;
        for(int val = x^y; val>0; count++){
            val = val & (val-1);
        }
        return count;
    }
};