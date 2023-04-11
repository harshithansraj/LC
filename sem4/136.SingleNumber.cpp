class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len=nums.size();
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<len-1){
            if(nums[i]!=nums[i+1]){
                return nums[i];
            }
            i=i+2;;
        }
        return nums[len-1];
    }
};
