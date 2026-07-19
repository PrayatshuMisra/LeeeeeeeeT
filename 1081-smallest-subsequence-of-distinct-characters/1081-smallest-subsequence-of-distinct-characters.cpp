class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> freq(26, 0);
        vector<bool> check(26, false);
        string ans;
        for (char i : s) {
            freq[i - 'a']++;
        }
        for (char i : s) {
            freq[i - 'a']--;
            if (check[i - 'a']) {
                continue;
            }
            while (!ans.empty() && ans.back() > i &&
                   freq[ans.back() - 'a'] > 0) {
                check[ans.back() - 'a'] = false;
                ans.pop_back();
            }
            ans.push_back(i);
            check[i - 'a'] = true;
        }
        return ans;
    }
};