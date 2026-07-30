class Solution {
public:
    int minimumPushes(string word) {
        unordered_set<int> st(word.begin(), word.end());
        int ans = 0;
        for (int i = 0; i < st.size(); i++) {
            ans = ans + i / 8 + 1;
        }
        return ans;
    }
};