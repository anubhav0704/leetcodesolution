class Solution {
public:
    int reverse(int x) {
        int numreverse=0;
        while(x!=0){
            int rem=x%10;
            if (numreverse > INT_MAX / 10 || numreverse < INT_MIN / 10) {
                return 0;
            }
            numreverse=numreverse*10+rem;
            x=x/10;
        }
       
        return numreverse;
    }
};