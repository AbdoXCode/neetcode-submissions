class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> dissapeared = {};
        for(int i =1;i<=nums.size();i++){
            if (find(nums.begin(),nums.end(),i) == nums.end()) {
                dissapeared.push_back(i);
            }
        }

        return dissapeared;   
    }
};