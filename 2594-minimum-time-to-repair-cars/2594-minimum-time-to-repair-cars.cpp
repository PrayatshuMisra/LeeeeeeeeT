class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        long long low = 1;
        long long min_rank = *min_element(ranks.begin(), ranks.end());
        long long high = min_rank * 1LL * cars * cars;
        while (low < high) {
            long long mid = low + (high - low) / 2;
            long long total = 0;
            for (int i : ranks) {
                total = total + sqrt((long double)mid / i);
                if (total >= cars) {
                    break;
                }
            }
            if (total >= cars) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};