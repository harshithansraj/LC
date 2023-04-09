 double myPow(double x, int n) {
        double N;
        N=(double)(n);
        if(N == 0 || x==1) {
            return 1.0;
        }
        if(N < 0) {
            x = 1 / x;
            N = -N;
        }
        if(n% 2 == 0) {
            return myPow(x * x, N / 2);
        } else {
            return x * myPow(x * x, N / 2);
        }
}
