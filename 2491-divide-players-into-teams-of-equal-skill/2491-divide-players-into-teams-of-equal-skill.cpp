class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int i = 0;
        int j = skill.size() - 1;
        long long ans = 0;
        sort(skill.begin(), skill.end());
        int target = skill[i] + skill[j];
        while (i < j) {
            if (skill[i] + skill[j] != target) {
                return -1;
            } else {
                ans = ans + 1LL * skill[i] * skill[j];
                i++;
                j--;
            }
        }
        return ans;
    }
};