// TLE Code

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for (int i=0;i<nums.size();i++){
            if(count(nums.begin(), nums.end(), nums[i])>1){
                return true;
            }
        }
        return false;
    }
};

// normal code

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        for (int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                return true;
            }
        }
        return false;
    }
};
