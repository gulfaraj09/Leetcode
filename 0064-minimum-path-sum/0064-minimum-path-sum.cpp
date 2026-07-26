class Solution {
public:
    int helper(vector<vector<int>>& grid, int m, int n, map<pair<int,int>,int>& mp) {
        if (m >= grid.size() || n >= grid[0].size()) return INT_MAX;
        if (m == grid.size() - 1 && n == grid[0].size() - 1) return grid[m][n];
        
        if (mp.find({m, n}) != mp.end()) return mp[{m, n}];
        
        int right = helper(grid, m, n + 1, mp);
        int down = helper(grid, m + 1, n, mp);
        
        return mp[{m, n}] = grid[m][n] + min(right, down);
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        map<pair<int,int>, int> mp;
        return helper(grid, 0, 0, mp);
    }
};
