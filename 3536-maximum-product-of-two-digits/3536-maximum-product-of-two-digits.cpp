class Solution {
public:
    int maxProduct(int n) {
        vector<int> ans;
        int digit = 0;
        if (n == 0) {
            return 0;
        }
        while (n > 0) {
            digit = n % 10;
            ans.push_back(digit);
            n = n / 10;
        }
        sort(ans.begin(), ans.end());
        reverse(ans.begin(), ans.end());
        if (ans.size() >= 2) {
            return ans[0] * ans[1];
        } else {
            return ans[0];
        }
    }
};