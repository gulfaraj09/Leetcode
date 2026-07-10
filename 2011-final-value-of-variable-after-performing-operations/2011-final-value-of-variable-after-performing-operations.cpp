class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count = 0;
        for(const auto &i : operations){
            if(i == "++X" || i == "X++")
                count++;
            else
                count--;
        }
        return count;
    }
};