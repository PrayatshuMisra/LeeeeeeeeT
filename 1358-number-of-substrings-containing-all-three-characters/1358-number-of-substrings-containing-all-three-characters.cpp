class Solution {
public:
    int numberOfSubstrings(string s) {
        int num = s.size();
        int left = 0;
        int ans = 0;
        vector<int> count(3, 0);
        for (int right = 0; right < num; right++) {
            count[s[right] - 'a']++;
            while (count[0] > 0 && count[1] > 0 && count[2] > 0) {
                ans += (num - right);
                count[s[left] - 'a']--;
                left++;
            }
        }
        return ans;
    }
};