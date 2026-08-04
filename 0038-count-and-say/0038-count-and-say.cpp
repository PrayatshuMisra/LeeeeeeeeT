class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        for (int i = 1; i < n; i++) {
            string temp = "";
            for (int j = 0; j < s.size(); j++) {
                int count = 1;
                while (j + 1 < s.size() && s[j] == s[j + 1]) {
                    count++;
                    j++;
                }
                temp = temp + to_string(count);
                temp = temp + s[j];
            }
            s = temp;
        }
        return s;
    }
};