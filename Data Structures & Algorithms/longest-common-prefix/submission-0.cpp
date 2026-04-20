class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string lcs = "";
        int maxLen = 0;
        for (string s: strs) {
            maxLen = max(maxLen, int(s.length()));
        }
        for (int i = 0; i < maxLen; i++) {
            bool flag = true;
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j][i] != strs[0][i]) {
                    flag = false;
                    break;
                }
            }
            if (flag) lcs += strs[0][i];
            else break;
        }
        return lcs;
    }
};