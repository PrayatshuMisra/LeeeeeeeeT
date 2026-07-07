class Solution {
public:
    int reverse(int n) {
        int rev_num = 0;
        int digit = 0;
        while (n > 0) {
            digit = n % 10;
            rev_num = (rev_num * 10) + (digit);
            n = n / 10;
        }
        return rev_num;
    }
    bool sumOfNumberAndReverse(int num) {
        for (int i = 0; i <= num; i++) {
            if (i + reverse(i) == num) {
                return true;
            }
        }
        return false;
    }
};