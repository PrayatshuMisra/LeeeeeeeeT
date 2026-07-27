class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = 0;
        int max2 = 0;
        for (int i : nums) {
            if (i > max1) {
                max2 = exchange(max1, i);
            } else if (i > max2) {
                max2 = i;
            }
        }
        return (max1 - 1) * (max2 - 1);
    }
};