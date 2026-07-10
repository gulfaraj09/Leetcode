class Solution {
public:
    bool isIsomorphic(string s, string t) {
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
};