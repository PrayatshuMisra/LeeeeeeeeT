class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0;
        int rem=0;
        for(int i : nums){
            sum=sum+i;
        }
        rem = sum % k;
        return rem;
    }
};