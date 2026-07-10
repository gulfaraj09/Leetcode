class Solution {
private:
    bool isomorph(string s, string t){
        unordered_map<char,char> mp1;
        unordered_map<char,char> mp2;
        int n = t.size();

        for(int i = 0; i < n; i++){
            if((mp1.contains(s[i]) and mp1[s[i]] != t[i]) || 
            (mp2.contains(t[i]) && mp2[t[i]] != s[i])) return false;
            mp1[s[i]] = t[i];
            mp2[t[i]] = s[i];
        }
        return true;
    }

public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        for(const auto &i : words){
            if(isomorph(i,pattern))
                ans.push_back(i);
        }

        return ans;
    }
};