class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int total = 0;
        int onedigit = 0;
        int twodigit = 0;
        for (int i : nums) {
            total = total + i;
            if (i < 10) {
                onedigit = onedigit + i;
            } else {
                twodigit = twodigit + i;
            }
        }
        return (onedigit > (total - onedigit) ||
                (twodigit > (total - twodigit)));
    }
};