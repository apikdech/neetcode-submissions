class Solution {
public:
    vector<long long> prefSum;
    int subarraySum(vector<int>& nums, int k) {
        prefSum.resize(nums.size());
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            prefSum[i] = nums[i];
            if (nums[i] == k) ans++;
            if (i) prefSum[i] += prefSum[i-1];
        }
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                long long sum = prefSum[j];
                if (i) sum -= prefSum[i-1];
                if (sum == k) ans++;
            }
        }
        return ans;
    }
};