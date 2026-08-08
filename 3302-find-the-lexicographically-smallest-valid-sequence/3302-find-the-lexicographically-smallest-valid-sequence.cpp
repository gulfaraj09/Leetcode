class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int len1 = word1.size(), len2 = word2.size();
        vector<int> dp(len2, -1);
        int j = len2 - 1;
        for(int i = len1 - 1; i >= 0; i--){
            if(j >= 0 && word1[i] == word2[j]){
                dp[j] = i;
                j--; 
            }
        }

        vector<int> ans;
        int skip = 0;
        j = 0;

        for(int i = 0; i < len1; ++i){
            if(j == len2)break;
            if(word1[i] == word2[j] || (skip == 0 && (j == len2 - 1 || i < dp[j + 1]))){
                skip  += (word1[i] != word2[j] ? 1: 0);
                ans.push_back(i);
                j += 1;
            }
        }
        return j == len2 ? ans: vector<int>();
    }
};