class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int ptr = 0;
        while(true) {
            bool flag = false;
            if (word1.length() > ptr) {
                ans += word1[ptr];
                flag = true;
            }
            if (word2.length() > ptr) {
                ans += word2[ptr];
                flag = true;
            }
            if (!flag) break;
            ptr++;
        }
        return ans;
    }
};