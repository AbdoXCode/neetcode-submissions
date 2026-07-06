class Solution {
public:
    bool isAnagram(string s, string t) {
       char freq[26] ={0};

    for (char c:s) {
       freq[c - 97]++;
    }

    for (char c:t) {
        freq[c-97]--;
    }

    for (int i=0;i<25;i++) {
        if (freq[i] <0 || freq[i] == 1) {
            return false;
        }
    }
    return true; 
    }
};
