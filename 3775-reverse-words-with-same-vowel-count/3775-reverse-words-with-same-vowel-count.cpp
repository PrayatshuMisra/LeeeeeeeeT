class Solution {
public:
    string reverseWords(string s) {
        int count1 = 0;
        int i = 0;
        while (i < s.size() && s[i] != ' ') {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {
                count1++;
            }
            i++;
        }
        while (i < s.size()) {
            if (s[i] == ' ') {
                i++;
                continue;
            }
            int count2 = 0;
            int j = i;
            while (i < s.size() && s[i] != ' ') {
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                    s[i] == 'u') {
                    count2++;
                }
                i++;
            }
            if (count1 == count2) {
                reverse(s.begin() + j, s.begin() + i);
            }
        }
        return s;
    }
};