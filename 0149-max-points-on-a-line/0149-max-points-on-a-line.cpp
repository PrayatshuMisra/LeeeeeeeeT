class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        if (points.size() <= 2) {
            return points.size();
        }
        int ans = 0;
        for (int i = 0; i < points.size(); i++) {
            map<pair<int, int>, int> mp;
            for (int j = i + 1; j < points.size(); j++) {
                int dx = points[j][0] - points[i][0];
                int dy = points[j][1] - points[i][1];
                int div = gcd(dx, dy);
                dx = dx / div;
                dy = dy / div;
                if (dx < 0) {
                    dx = -dx;
                    dy = -dy;
                } else if (dx == 0) {
                    dy = 1;
                } else if (dy == 0) {
                    dx = 1;
                }
                mp[{dx, dy}]++;
            }
            for (auto it : mp) {
                ans = max(ans, it.second + 1);
            }
            ans = max(ans, 1);
        }
        return ans;
    }
};