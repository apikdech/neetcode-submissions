class Solution {
public:
    bool isPalindrome(string s) {
        string t = s;
        reverse(t.begin(), t.end());
        return s == t;
    }
    bool validPalindrome(string s) {
        for (int l = 0, r = s.length() - 1; l < s.length()/2; l++) {
            if (s[l] == s[r]) r--;
            else {
                int len = r - l;
                string sl = s.substr(l + 1, len);
                string sr = s.substr(l, len);
                return isPalindrome(sl) || isPalindrome(sr);
            }
        }
        return true;
    }
};