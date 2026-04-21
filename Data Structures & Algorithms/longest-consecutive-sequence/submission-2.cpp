class Solution {
public:
    unordered_map<int, int> p, sz;
    int f(int v) {
        if (v == p[v]) return v;
        return f(p[v]);
    }

    void unite(int u, int v) {
        u = f(p[u]);
        v = f(p[v]);
        if (sz[u] > sz[v]) swap(u, v);
        p[u] = v;
        sz[v] += sz[u];
    }

    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        unordered_set<int> s;
        int ans = 1;
        for (int x : nums) {
            if (s.count(x)) continue;
            s.insert(x);
            p[x] = x;
            sz[x] = 1;
            if (s.count(x-1)) unite(x, x-1);
            if (s.count(x+1)) unite(x, x+1);
            ans = max(ans, sz[f(x)]);
        }
        // for (int x : s) {
        //     cout << x << " " << p[x] << " " << sz[x] << "\n";
        // }
        return ans;
    }
};
