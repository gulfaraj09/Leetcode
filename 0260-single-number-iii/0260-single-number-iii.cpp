class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long temp = 0;
        for(auto n : nums){
            temp ^= n;
        }
        long long right_most_bit = temp & -temp;

        int num1 = 0, num2 = 0;
        for(auto i : nums){
            if(right_most_bit & i){
                num1 ^= i;
            } else {
                num2 ^= i;
            }
        }

        return {num1, num2};
    }
};