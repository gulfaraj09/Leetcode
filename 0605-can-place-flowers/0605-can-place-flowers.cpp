class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0)return true;
        int i=0,len=flowerbed.size(),j=2;
        if(1 == len and 0 == flowerbed[i])return true;
        else if(1==len)return false;
        if(0 == flowerbed[0] and 0 == flowerbed[1]){
            --n;
            i +=1;
            j +=1;
            flowerbed[0] = 1;
            if(0 == n)return true;
        }
        while(j<len){
            if(0 == flowerbed[i] and 0 == flowerbed[j] and 1 != flowerbed[i+1]){
                --n;
                flowerbed[i+1] = 1;
                i += 2;
                j += 2;
                if(0 == n)return true;
            }else{
                ++i;++j;
            }
        }
        if(0 == flowerbed[len-2] and 0 == flowerbed[len-1]){
            --n;
        }
        cout<<n;
        return (0 == n)?true:false;
    }
};