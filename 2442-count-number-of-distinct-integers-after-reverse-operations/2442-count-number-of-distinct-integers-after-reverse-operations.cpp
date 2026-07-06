class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> s;
        int digit = 0;
        for (int i : nums) {
            s.insert(i);
        }
        for (int i : nums) {
            int rev_num = 0;
            while (i > 0) {
                digit = i % 10;
                rev_num = (rev_num * 10) + digit;
                i = i / 10;
            }
            s.insert(rev_num);
        }
        return s.size();
    }
};