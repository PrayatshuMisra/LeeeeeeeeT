class Solution {
public:
    int countDigits(int num) {
        int digit = 0;
        int copy = num;
        int count = 0;
        while (copy > 0) {
            digit = copy % 10;
            if (digit != 0 && num % digit == 0) {
                count++;
            }
            copy = copy / 10;
        }
        return count;
    }
};