class Solution {
public:
    vector<string> ans;
    void func(string& temp, int n) {
        if (temp.size() == n) {
            ans.push_back(temp);
            return;
        }
        temp.push_back('1');
        func(temp, n);
        temp.pop_back();
        if (temp.empty() || temp.back() != '0') {
                temp.push_back('0');
                func(temp, n);
                temp.pop_back();
            }
    }
    vector<string> validStrings(int n) {
        string temp = "";
        func(temp, n);
        return ans;
    }
};