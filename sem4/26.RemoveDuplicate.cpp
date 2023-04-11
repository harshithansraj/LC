class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        int i = 0;
        while (i < len - 1) {
            if (nums[i] == nums[i + 1]) {
                nums.erase(nums.begin() + i + 1);
                len--;
            } else {
                i++;
            }
        }
        sort(nums.begin(), nums.end());
        return len;
    }
};
