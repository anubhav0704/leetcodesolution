class Solution {
public:
    int captureForts(vector<int>& forts) {
        int n=forts.size();
        int result=0;
        int i=0;
        for(int j=1;j<n;j++){
            if(forts[j]){
                if(forts[i]==-forts[j]) result=max(result,j-i-1);
                i=j;
            }
            
        }
        return result;
    }
};