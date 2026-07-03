class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maximum_element = *max_element(candies.begin(), candies.end());
        for(int i : candies){
            ans.push_back(i + extraCandies >= maximum_element);
        }
        return ans;
    }
};