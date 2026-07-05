class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> ans;
        for (char i : s) {
            ans.insert(i);
        }
        return ans.size();
    }
};