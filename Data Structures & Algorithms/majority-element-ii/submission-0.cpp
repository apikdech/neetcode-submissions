class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> cnt;
        for (int x : nums) {
            if (cnt.count(x)) cnt[x]++;
            else cnt[x] = 1;
        }

        vector<int> ans;
        for (int i = 0; i < 100; i++) {
            int candidate = nums[rand() % nums.size()];
            if (cnt[candidate] > nums.size()/3) {
                ans.push_back(candidate);
                cnt[candidate] = 0;
            }
        }
        return ans;
    }
};