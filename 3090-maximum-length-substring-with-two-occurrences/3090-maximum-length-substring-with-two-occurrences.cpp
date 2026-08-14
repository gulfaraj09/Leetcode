class Solution {
public:
    int maximumLengthSubstring(string s) {
        map<char,int> dp;
        int count = 0, n = s.length();
        int left = 0;

        for(int i = 0; i < n; i++){
            dp[s[i]]++;
            while(dp[s[i]] > 2){
                dp[s[left]]--;
                ++left;
            }
            count = max(count, i - left + 1);
        }
        return count;
    }
};