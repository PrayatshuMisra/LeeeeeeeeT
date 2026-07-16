class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> prefix_gcd(nums.size());
        int mx = 0;
        for (int i = 0; i < nums.size(); i++) {
            mx = max(mx, nums[i]);
            prefix_gcd[i] = gcd(nums[i], mx);
        }
        sort(prefix_gcd.begin(), prefix_gcd.end());
        long long ans = 0;
        int left = 0;
        int right = prefix_gcd.size() - 1;
        while (left < right) {
            ans = ans + gcd(prefix_gcd[left], prefix_gcd[right]);
            left++;
            right--;
        }
        return ans;
    }
};