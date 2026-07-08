class Solution {
public:
    static constexpr int MOD = 1e9 + 7;

    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {

        int n = s.size();

        vector<long long> preSum(n + 1, 0);
        vector<long long> preCnt(n + 1, 0);
        vector<long long> preHash(n + 1, 0);
        vector<long long> pow10(n + 1, 1);

        for (int i = 1; i <= n; i++)
            pow10[i] = pow10[i - 1] * 10 % MOD;

        for (int i = 0; i < n; i++) {
            preSum[i + 1] = preSum[i];
            preCnt[i + 1] = preCnt[i];
            preHash[i + 1] = preHash[i];

            if (s[i] != '0') {
                int d = s[i] - '0';
                preSum[i + 1] += d;
                preCnt[i + 1]++;
                preHash[i + 1] = (preHash[i] * 10 + d) % MOD;
            }
        }

        vector<int> ans;

        for (auto &q : queries) {

            int l = q[0];
            int r = q[1];

            long long sum = preSum[r + 1] - preSum[l];
            long long cnt = preCnt[r + 1] - preCnt[l];

            long long x = (preHash[r + 1]
                          - preHash[l] * pow10[cnt] % MOD
                          + MOD) % MOD;

            ans.push_back(x * sum % MOD);
        }

        return ans;
    }
};