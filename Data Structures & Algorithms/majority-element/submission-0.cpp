class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        while(true) {
            // select random
            int candidate = nums[rand() % n];
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                if (nums[i] == candidate) cnt++;
            }
            if (cnt > n/2) return candidate;
        }
    }
};