class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int first = 0;
        int second = 1;
        for (int i : nums) {
            if (i > 0) {
                ans[first] = i;
                first = first + 2;
            } else {
                ans[second] = i;
                second = second + 2;
            }
        }
        return ans;
    }
};