class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int row1 = 0;
        int ans = 0;
        for (string i : bank) {
            int count = 0;
            for (char c : i) {
                if (c == '1') {
                    count++;
                }
            }
            if (count > 0) {
                ans = ans + (row1 * count);
                row1 = count;
            }
        }
        return ans;
    }
};