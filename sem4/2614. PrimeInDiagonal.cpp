// Correct but TLE
class Solution {
public:
    bool isprime(int n){
        if(n<2) return false;
        for(int i=2;i<n/2;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int len=nums.size();
        int max=0;
        for(int i=0;i<len;i++){
            if(isprime(nums[i][i]) && nums[i][i]>max){
                max=nums[i][i];
            }
            if(isprime(nums[i][len - i - 1]) && nums[i][len - i - 1]>max){
                max=nums[i][len- i - 1];
            }
        }
        return max;
        
    }
};

//TLE removed
class Solution {
public:
    bool isprime(int n){
        if(n<2) return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int len=nums.size();
        int an=0;
        for(int i=0;i<len;i++){
            if(isprime(nums[i][i])){
                an=max(nums[i][i],an);
            }
            if(isprime(nums[i][len - i - 1])){
                an=max(nums[i][len- i - 1],an);
            }
        }
        return an;
        
    }
};
