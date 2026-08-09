class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }
        int target = mp.begin()->second;
        for (const auto& pair : mp) {
            if (pair.second != target) {
                return false;
            }
        }
        return true;
    }
};