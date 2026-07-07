class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int counter = 0;
        int maxCounter = 0;
        for(int x:nums){
            if(x == 1){
                counter++;
                maxCounter = max(counter,maxCounter);
            }else{
                counter =0;
            }
        }
        return maxCounter;
    }
};