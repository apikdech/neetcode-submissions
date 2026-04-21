class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int prev = -1;
        for (int x : prices) {
            if (prev == -1) prev = x;
            else {
                if (x > prev) ans += x - prev;
                prev = x;
            }
        }
        return ans;
    }
};