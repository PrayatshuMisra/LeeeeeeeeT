class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        int ans = 0;
        sort(nums.begin(), nums.end());
        while (left < right) {
            ans = max(ans, nums[left] + nums[right]);
            left++;
            right--;
        }
        return ans;
    }
};