class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int last=0;
        int count=0;
        for(int i : nums){
            while(i>0){
                last=i%10;
                if(last==digit){
                    count++;
                }
                i=i/10;
            }
        }
        return count;
    }
};