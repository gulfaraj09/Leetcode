class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mp1;
        unordered_map<string,char> mp2;
        int n = s.size(), k = 0, count = 0;
        string temp;
        
        for(int i = 0; i < n; i++){
            if(s[i] == ' ' || i == n-1){
                if(i == n-1)temp.push_back(s[i]);
                if((mp1.contains(pattern[k]) && mp1[pattern[k]] != temp) || 
                mp2.contains(temp) and mp2[temp] != pattern[k])
                    return false;
                mp1[pattern[k]] = temp;
                mp2[temp] = pattern[k++];
                temp = "";
                count++;
            } else
                temp.push_back(s[i]);
        }
        if(count!=pattern.size())return false;
        return true;

    }
};