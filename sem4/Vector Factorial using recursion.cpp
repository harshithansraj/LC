// Conversion of int to vector using push_back
class Solution {
public:
    long long fact(long long N) {
        if (N == 1) return 1;
        return N * fact(N-1);
    }

    vector<long long> factorialNumbers(long long N) {
        vector<long long> res;
        int i=1;
        while(fact(i)<=N){
            res.push_back(fact(i));
            i++;
        }
        return res;
    }
};
