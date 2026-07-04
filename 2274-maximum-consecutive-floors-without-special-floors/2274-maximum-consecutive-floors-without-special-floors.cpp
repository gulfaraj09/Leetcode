class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        int ans = 0, len = special.size();
        sort(special.begin(), special.end());
        for(int i=1;i<len;i++){
            ans = max((special[i]-special[i-1])-1,ans);
        }
        ans = max(ans,(special[0])-bottom);
        ans = max(ans,(top- special[len-1]));
        return ans;
    }
};