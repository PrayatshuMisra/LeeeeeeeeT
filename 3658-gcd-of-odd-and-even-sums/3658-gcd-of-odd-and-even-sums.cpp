class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd_sum = 0;
        int even_sum = 0;
        int ans;
        for (int i = 1; i <= n; i++) {
            odd_sum = odd_sum + (2 * i - 1);
            even_sum = even_sum + (2 * i);
            ans = gcd(odd_sum, even_sum);
        }
        return ans;
    }
};