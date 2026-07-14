class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> ans;
        int rows = matrix.size();
        int cols = matrix[0].size();
        for (int i = 0; i < rows; i++) {
            int min_value = matrix[i][0];
            int col = 0;
            for (int j = 1; j < cols; j++) {
                if (min_value > matrix[i][j]) {
                    min_value = matrix[i][j];
                    col = j;
                }
            }
            bool check = true;
            for (int k = 0; k < rows; k++) {
                if (matrix[k][col] > min_value) {
                    check = false;
                    break;
                }
            }
            if (check) {
                ans.push_back(min_value);
            }
        }
        return ans;
    }
};