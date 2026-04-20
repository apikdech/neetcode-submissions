class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> l(n, 1), r(n, 1);
        for (int i = 0; i < n; i++) {
            l[i] = nums[i];
            r[n-i-1] = nums[n-i-1];
            if (i) l[i] *= l[i-1], r[n-i-1] *= r[n-i];
        }
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            int t = 1;
            if (i) t *= l[i-1];
            if (i < n-1) t *= r[i+1];
            ans.push_back(t);
        }
        return ans;
    }
};
