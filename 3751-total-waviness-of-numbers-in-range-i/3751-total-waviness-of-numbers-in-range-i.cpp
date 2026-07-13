class Solution {
public:
    int func(int n) {
        vector<int> digit;
        while (n > 0) {
            digit.push_back(n % 10);
            n = n / 10;
        }
        if (digit.size() < 3) {
            return 0;
        }
        int count = 0;
        reverse(digit.begin(), digit.end());
        for (int i = 1; i < digit.size() - 1; i++) {
            if (digit[i] > digit[i - 1] && digit[i] > digit[i + 1] ||
                digit[i] < digit[i - 1] && digit[i] < digit[i + 1]) {
                count++;
            }
        }
        return count;
    }
    int totalWaviness(int num1, int num2) {
        int ans = 0;
        for (int i = num1; i <= num2; i++) {
            ans = ans + func(i);
        }
        return ans;
    }
};