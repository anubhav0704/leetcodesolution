class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        set<int> st(nums.begin(),nums.end());
        if(st.size()<3) return *st.rbegin();
        return *next(st.rbegin(),2);

    }
};