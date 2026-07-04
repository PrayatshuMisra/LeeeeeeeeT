class Solution {
public:
    vector<int> minOperations(string boxes) {
        int num = boxes.size();
        vector<int> ans(num, 0);
        int ball = 0;
        int step = 0;
        for (int i = 0; i < num; i++) {
            ans[i] = ans[i] + step;
            if (boxes[i] == '1') {
                ball++;
            }
            step = step + ball;
        }
        ball = 0;
        step = 0;
        for (int i = num - 1; i >= 0; i--) {
            ans[i] = ans[i] + step;
            if (boxes[i] == '1') {
                ball++;
            }
            step = step + ball;
        }
        return ans;
    }
};