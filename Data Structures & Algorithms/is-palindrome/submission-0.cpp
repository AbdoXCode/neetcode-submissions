class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),[](char c) {return tolower(c);});

        for (char& c:s) {
            bool is_lowercase = (c >= 'a' && c <= 'z');
            bool is_number    = (c >= '0' && c <= '9');

            if (!(is_lowercase || is_number)) {
                c=' ';
            }
        }

        s.erase(remove(s.begin(), s.end(), ' '), s.end());

        int i = 0;
        int j = s.length()-1;

        while (i<j) {
            if (s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};
