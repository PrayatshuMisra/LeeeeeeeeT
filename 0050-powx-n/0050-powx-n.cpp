class Solution {
public:
    double myPow(double x, int n) {
        long long nn = n;
        double ans = 1.0;

        if (nn < 0) nn = -nn;

        while (nn > 0) {
            if (nn & 1) {
                ans *= x;
            }
            x *= x;
            nn >>= 1;
        }

        if (n < 0) ans = 1.0 / ans;

        return ans;
    }
};
