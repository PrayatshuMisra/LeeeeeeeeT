class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> arr2 = arr;
        sort(arr2.begin(), arr2.end());
        unordered_map<int, int> mp;
        int rank = 1;
        for (int i : arr2) {
            if (mp.find(i) == mp.end()) {
                mp[i] = rank;
                rank++;
            }
        }
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = mp[arr[i]];
        }
        return arr;
    }
};