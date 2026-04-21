class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for (int &x: nums) {
            if (x < 0) x = 0;
        }
        for (int i = 0; i < n; i++) {
            int x = abs(nums[i]);
            if (x < 1 || x > n) continue;
            if (nums[x - 1] > 0) nums[x - 1] *= -1;
            else if (nums[x - 1] == 0) nums[x - 1] = -(n + 1);
        }
        for (int i = 0; i < n; i++) { 
           if (nums[i] >= 0) return i + 1;
        }
        return n + 1;
    }
};