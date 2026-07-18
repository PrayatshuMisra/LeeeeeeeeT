class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int count_r = 0;
        int count_c = 0;
        for (int i = 0; i < rows; i++) {
            int left = 0;
            int right = cols - 1;
            while (left < right) {
                if (grid[i][left] != grid[i][right]) {
                    count_r++;
                }
                left++;
                right--;
            }
        }
        for (int i = 0; i < cols; i++) {
            int top = 0;
            int bottom = rows - 1;
            while (top < bottom) {
                if (grid[top][i] != grid[bottom][i]) {
                    count_c++;
                }
                top++;
                bottom--;
            }
        }
        return min(count_r, count_c);
    }
};