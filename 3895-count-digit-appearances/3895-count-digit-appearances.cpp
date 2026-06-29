class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count =0;
        for(int i:nums){
            while(i>0){
                if(i%10 == digit)++count;
                i /=10;
            }
        }
        return count;
    }
};