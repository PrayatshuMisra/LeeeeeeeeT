class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        vector<pair<int, int>> temp;
        long long total_cost = 0;
        for (int i = 0; i < nums.size(); i++) {
            temp.push_back({nums[i], cost[i]});
            total_cost = total_cost + cost[i];
        }
        sort(temp.begin(), temp.end());
        long long present_cost = 0;
        int target = 0;
        for (int i = 0; i < nums.size(); i++) {
            present_cost = present_cost + temp[i].second;
            if (present_cost >= (total_cost + 1) / 2){
                    target = temp[i].first;
                    break;
                }
        }
        long long ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            ans = ans + 1LL * abs(nums[i] - target) * cost[i];
        }
        return ans;
    }
};