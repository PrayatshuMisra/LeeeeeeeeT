class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int ans = 0;
        int l = 0;
        int r = piles.size() - 2;
        while (l < r) {
            ans = ans + piles[r];
            l++;
            r = r - 2;
        }
        return ans;
    }
};