class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> ans(m, vector<int> (n));
        int total_elements = m * n;
        k = k % total_elements;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int index = i * n + j;
                int new_index = (index + k) % total_elements;
                int new_row = new_index / n;
                int new_col = new_index % n;
                ans[new_row][new_col] = grid[i][j];
            }
        }
        return ans;
    }
};