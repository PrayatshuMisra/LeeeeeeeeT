class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> a1;
        int count = 0;
        for (char i : s) {
            a1[i]++;
        }
        for (char i : t) {
            if (a1[i] > 0) {
                a1[i]--;
            } else {
                count++;
            }
        }
        return count;
    }
};