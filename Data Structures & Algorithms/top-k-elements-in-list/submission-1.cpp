class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int, int>> count(2001);
        vector<int> ans;

        for (int x:nums) {
            int idx = x + 1000;
            count[idx].second = x;
            count[idx].first++;
        }


        sort(count.begin(),count.end());
        reverse(count.begin(),count.end());

        int i =0;
        while (k--) {
            ans.push_back(count[i].second);
            i++;
        }
        return ans;
    }
};
