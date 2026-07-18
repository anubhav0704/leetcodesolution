class Solution {
public:
    int firstUniqChar(string s) {
        int m=s.size();
        unordered_map<char,int> mp;
        for (char c:s) {
            mp[c]++;
        }
        for(int i=0;i<m;i++){
            if(mp[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};