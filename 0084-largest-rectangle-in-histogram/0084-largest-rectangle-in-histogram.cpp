class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int ans=0;
        stack<int> st;
        for(int i=0;i<=n;i++){
            while(!st.empty() && (i==n || heights[st.top()]>heights[i])){
                int h=heights[st.top()];
                st.pop();
                int left;
                if(st.empty()){
                    left=-1;
                }
                else{
                    left=st.top();
                }
                int width=i-left-1;
                ans=max(ans,h*width);
            }
            st.push(i);
        }
        return ans;
    }
};