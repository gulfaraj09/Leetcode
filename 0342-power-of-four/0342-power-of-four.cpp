class Solution {
public:
    bool isPowerOfFour(int n) {
        unsigned int num = n;
        if(num==0)return false;
        return ((num & num - 1) == 0 and (num-1) % 3 == 0);
    }
};