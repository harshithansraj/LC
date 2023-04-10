
class Solution{
public:
    bool isprime(int n){
        if (n <= 1) {
            return false;
        }
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) {
                return false;
            }
        }
        return true;
    }

    std::vector<int> AllPrimeFactors(int N) {
        std::vector<int> res;
        for(int i=2;i<=N;i++){
            if(N%i==0){
                if(isprime(i)){
                    res.push_back(i);
                }
            }
        }
        return res;
    }
};
