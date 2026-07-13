class Solution {
public:
    void reverseString(vector<char>& s) {
        int x = 0;
        int y = s.size()-1;

        while (y>x){
            swap(s[x],s[y]);

            x++;
            y--;
        }
    }
};