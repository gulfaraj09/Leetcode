class Solution {
public:
    bool substring(string s1, string s2){
        int i = 0, j =0, len1 = s1.size(), len2 = s2.size();
        while(i<len1 and j<len2){
            if(s1[i]==s2[j]){
                ++i;
            }
            else{j=j-i;i=0;}
            j++;
        }
        return (i==len1);
    }
    int numOfStrings(vector<string>& patterns, string word) {
        int count =0;
        for(int i=0;i<patterns.size();i++){
            if(substring(patterns[i],word))count++;
        }
        return count;
    }
};