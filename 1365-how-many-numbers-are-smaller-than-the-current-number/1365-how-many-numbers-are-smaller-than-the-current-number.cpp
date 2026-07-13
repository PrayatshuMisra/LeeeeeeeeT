class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> temp = nums;
        unordered_map<int, int> mp;
        sort(temp.begin(), temp.end());
        for (int i = 0; i < temp.size(); i++) {
            if (mp.find(temp[i]) == mp.end()) {
                mp[temp[i]] = i;
            }
        }
        vector<int> ans;
        for (int i : nums) {
            ans.push_back(mp[i]);
        }
        return ans;
    }
};