class Solution {
public:
    int smallestNumber(int n, int t) {
        int number = n, mul = 1;
        while(n>0){
            mul *= (n%10);
            n /=10;
        }

        while(mul % t != 0){
            n = number + 1;
            number = n;
            mul = 1;
            while(n > 0){
                mul *= (n % 10); 
                n /= 10;
            }
        }
        return number;
    }
};