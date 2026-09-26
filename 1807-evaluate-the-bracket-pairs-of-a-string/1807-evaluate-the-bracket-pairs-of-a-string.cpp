class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> mp;
        for (const auto& pair : knowledge) {
            mp[pair[0]] = pair[1];
        }
        
        string ans = "";
        int n = s.size();
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                string temp = "";
                i++;
                
                while (i < n && s[i] != ')') {
                    temp.push_back(s[i]);
                    i++;
                }
                
                if (mp.count(temp)) {
                    ans += mp[temp];
                } else {
                    ans.push_back('?');
                }
            } else {
                ans.push_back(s[i]);
            }
        }
        
        return ans;
    }
};
