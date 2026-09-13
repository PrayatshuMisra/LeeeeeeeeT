class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int freq[10] = {};
        for (int i : digits) {
            freq[i]++;
        }
        int ans = 0;
        for (int i = 100; i <= 999; i += 2) {
            int x = i;
            int a = x / 100;
            int b = (x / 10) % 10;
            int c = x % 10;
            int req[10] = {};
            req[a]++;
            req[b]++;
            req[c]++;
            bool get = true;
            for (int j = 0; j <= 9; j++) {
                if (req[j] > freq[j]) {
                    get = false;
                    break;
                }
            }
            if (get) {
                ans++;
            }
        }
        return ans;
    }
};