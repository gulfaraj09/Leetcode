class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int n) {
        int len = cells.size();
        n = (n - 1) % 14 + 1;
        int k = n;
        vector<int> ans(len);
        while (n > 0){
            for (int i = 1; i < len - 1; i++){
                if(cells[i - 1] == cells[i + 1]) ans[i] = 1;
                else ans[i] = 0;
            }
            if(n == k)ans[0] = 0, ans[len-1] = 0;
            n--;
            cells = ans;
        }
        return ans;
    }
};