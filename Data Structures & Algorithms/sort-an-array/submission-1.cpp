class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
       vector<int> cnt(100005);
       int c = 50000;

       for (int x : nums) {
            cnt[x + c]++;
       }
       vector<int> ans;
       for (int num = 0; num < cnt.size(); num++) {
            if (cnt[num]) {
                for (int i = 0; i < cnt[num]; i++) {
                    ans.push_back(num - c);
                }
            }
       }
       return ans;
    }
};