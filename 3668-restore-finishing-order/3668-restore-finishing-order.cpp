class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
// unordered_set<int> st = {2, 5, 8};
// cout << st.count(5);   // 1
// cout << st.count(7);   // 0
        unordered_set<int> a(friends.begin(), friends.end());
        vector<int> ans;
        for(int x : order){
            if(a.count(x)){
                ans.push_back(x);
            }
        }
        return ans;
    }
};