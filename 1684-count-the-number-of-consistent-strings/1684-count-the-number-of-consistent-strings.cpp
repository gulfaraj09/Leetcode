class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n = allowed.size(), count = 0;
        unordered_map<char,int> sp;


        for(const auto &i : allowed){
            sp[i]++;
        }

        for(const auto &i : words){
            bool flag = true;
            for(const auto &j : i){
                if(!sp.contains(j)){
                    flag = false;
                    break;
                }
            }
            if(flag)count++;
        }
        
        return count;
    }
};