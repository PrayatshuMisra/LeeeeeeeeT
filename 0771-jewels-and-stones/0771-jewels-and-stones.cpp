class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> a;
        int count=0;
        for(char i : jewels){
            a.insert(i);
        }
        for(char i : stones){
            if(a.count(i)){
                count++;
            }
        }
        return count;

    }
};