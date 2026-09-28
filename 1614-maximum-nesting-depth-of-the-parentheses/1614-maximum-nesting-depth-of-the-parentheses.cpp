class Solution {
public:
    int maxDepth(string s) {
        int ans = 0, count = 0;
        for(const auto &i: s){
            if(i == '('){
                count++;
            } else if(i == ')'){
                count--;
            }
            ans = max(count,ans);
        }
        return ans;
    }
};