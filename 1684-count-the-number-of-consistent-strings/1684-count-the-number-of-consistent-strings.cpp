class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, int> mp;
        for (char c : allowed) {
            mp[c]++;
        }
        int count = 0;
        for (string a : words) {
            bool ans = true;
            for (char c : a) {
                if (mp.find(c) == mp.end()) {
                    ans = false;
                    break;
                }
            }
            if (ans) {
                count++;
            }
        }
        return count;
    }
};