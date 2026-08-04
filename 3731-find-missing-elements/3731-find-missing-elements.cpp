class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());
        int mini = *min_element(nums.begin(), nums.end());
        vector<int> ans;
        vector<int> freq(maxi - mini + 1, 0);
        for (int i : nums) {
            freq[i - mini] = 1;
        }
        for (int i = mini; i <= maxi; i++) {
            if (freq[i - mini] == 0) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};