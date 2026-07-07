class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;
        for (int i : nums) {
            sum1 = sum1 + i;
        }
        int digit = 0;
        for (int i : nums) {
            while (i > 0) {
                digit = i % 10;
                sum2 = sum2 + digit;
                i = i / 10;
            }
        }
        return abs(sum1 - sum2);
    }
};