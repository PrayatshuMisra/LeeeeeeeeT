class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts,
                vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        long long m1 = horizontalCuts[0];
        for (int i = 1; i < horizontalCuts.size(); i++) {
            m1 = max(m1, (long long)horizontalCuts[i] - horizontalCuts[i - 1]);
        }
        m1 = max(m1, (long long)h - horizontalCuts.back());
        long long m2 = verticalCuts[0];
        for (int i = 1; i < verticalCuts.size(); i++) {
            m2 = max(m2, (long long)verticalCuts[i] - verticalCuts[i - 1]);
        }
        m2 = max(m2, (long long)w - verticalCuts.back());
        return (m1 * m2) % 1000000007;
    }
};