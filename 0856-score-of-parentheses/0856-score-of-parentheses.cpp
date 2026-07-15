class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        int count = 0;
        for (char c : s) {
            if (c == '(') {
                st.push(count);
                count = 0;
            } else {
                count = st.top() + max(2 * count, 1);
                st.pop();
            }
        }
        return count;
    }
};