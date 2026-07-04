class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int ans = 0, n=0;
        set<int, std::greater<int>> pq;
        for(auto& i : nums){
            pq.insert(i);
        }
        while(!pq.empty()){
            if(n==3)return ans;
            ans = *pq.begin();
            cout<<ans<<endl;
            pq.erase(pq.begin());
            ++n;
        }
        return (n==3)?ans:*max_element(nums.begin(),nums.end());
    }
};