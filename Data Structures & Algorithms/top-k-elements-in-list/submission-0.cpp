class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for (int x : nums) {
            if (m.count(x)) m[x]++;
            else m[x] = 1;
        }
        vector<pair<int, int>> t;
        for (auto &[k, v]: m) {
            t.push_back({v, k});
        }
        sort(t.begin(), t.end(), greater<>());
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(t[i].second);
        }
        return ans;
    }
};
