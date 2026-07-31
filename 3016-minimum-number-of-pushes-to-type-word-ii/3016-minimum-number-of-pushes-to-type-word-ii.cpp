class Solution {
public:
    int minimumPushes(string word) {
        vector<int> ans(26, 0);
        for (char i : word) {
            ans[i - 'a']++;
        }
        sort(ans.begin(), ans.end(), greater<int>());
        int count = 0;
        for (int i = 0; i < 26; i++) {
            if (ans[i] == 0) {
                break;
            }
            count = count + ans[i] * (i / 8 + 1);
        }
        return count;
    }
};