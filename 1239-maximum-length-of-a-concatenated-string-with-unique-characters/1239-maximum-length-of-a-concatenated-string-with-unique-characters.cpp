class Solution {
public:
    int ans = 0;
     void solve(vector<string>& arr, int idx, string str) {
        ans = max(ans, (int)str.size());

        for (int i = idx; i < arr.size(); i++) {
            string temp = str + arr[i];

            unordered_set<char> hs(temp.begin(), temp.end());

            if (hs.size() == temp.size()) {
                solve(arr, i + 1, temp);
            }
        }
    }
    int maxLength(vector<string>& arr) {
        solve(arr, 0, "");
        return ans;
    }
};