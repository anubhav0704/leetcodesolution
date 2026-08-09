class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int hr) {
        int l=1;
        int h = *max_element(piles.begin(),piles.end());
        while(l<h){
            int m=(l+h)/2;
            int hrs=0;
            for(int p:piles){
                hrs+=(p+m-1)/m;
            }
            if(hrs<=hr){
                h=m;
            }else{
                l=m+1;
            }
        }
        return l;
    }
};