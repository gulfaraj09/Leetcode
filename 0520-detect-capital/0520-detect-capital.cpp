class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0, len = word.size();
        for(int i:word){
            if(i>=65 and i<=90)++count;
        }
        cout<<count;
        return (count == len || 0 == count || (1 == count && (word[0]>=65 && word[0]<=90)));
    }
};