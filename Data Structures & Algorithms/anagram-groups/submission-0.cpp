class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> ans;
        for (string s: strs) {
            string tmp = s;
            sort(tmp.begin(), tmp.end());
            ans[tmp].push_back(s);
        }
        vector<vector<string>> res;
        for (auto &[k, v]: ans) {
            res.push_back(v);
        }
        return res;
    }
};
