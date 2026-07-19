class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> ans;
        for (int i = arr.size() - 1; i > 0; i--) {
            int index =
                max_element(arr.begin(), arr.begin() + i + 1) - arr.begin();
            if (index == i) {
                continue;
            }
            if (index != 0) {
                reverse(arr.begin(), arr.begin() + index + 1);
                ans.push_back(index + 1);
            }
            reverse(arr.begin(), arr.begin() + i + 1);
            ans.push_back(i + 1);
        }
        return ans;
    }
};