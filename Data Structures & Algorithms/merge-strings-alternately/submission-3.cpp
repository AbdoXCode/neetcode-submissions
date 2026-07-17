class Solution {
   public:
    string mergeAlternately(string word1, string word2) {
        int p1 = 0, p2 = 0;
        string finalString;

        while (p1 < word1.size() && p2 < word2.size()) {
            finalString += word1[p1++];
            finalString += word2[p2++];
        }

        finalString += word1.substr(p1);
        finalString += word2.substr(p2);

        return finalString;
    }
};