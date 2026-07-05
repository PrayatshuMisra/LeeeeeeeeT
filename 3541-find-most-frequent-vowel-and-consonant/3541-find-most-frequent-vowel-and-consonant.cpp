class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> mp;
        int vowel = 0;
        int cons = 0;
        for (char i : s) {
            mp[i]++;
        }
        for (auto& it : mp) {
            char c = it.first;
            int freq = it.second;
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowel = max(vowel, freq);
            } else {
                cons = max(cons, freq);
            }
        }
        return (vowel + cons);
    }
};