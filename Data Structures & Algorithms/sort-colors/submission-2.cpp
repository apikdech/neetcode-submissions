class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        for (int i = 0; i <= r; i++) {
            while(true) {
                if (nums[i] == 2 && r > i) {
                    swap(nums[i], nums[r]); r--;
                }
                else if (nums[i] == 0 && l < i) {
                    swap(nums[i], nums[l]); l++;
                }
                else break;
            }
            
        }
    }
};