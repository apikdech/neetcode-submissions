class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";
        for (char c : s) {
            if (c >= 'a' && c <= 'z' || c >= '0' && c <= '9') {
                t += c;
            } else if (c >= 'A' && c <= 'Z') {
                t += c - 'A' + 'a';
            }
        }
        string r = t;
        reverse(r.begin(), r.end());
        return t == r;
    }
};
