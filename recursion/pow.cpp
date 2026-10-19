class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long long nn = n;
        if(nn < 0) nn = -1*nn;
        while(nn){
            if(nn % 2){
                ans = ans * x;
                nn = nn - 1;
            }else{
                x = x*x;
                nn = nn / 2;
            }
        }
        if(n < 0) ans = (double)(1.0)/double(ans);
        return ans;
    }
};
// time complexity : O(n)
// soace complexity : O(1)

class Solution {
public:
    double powfn(double x , int n){
        if(n == 0) return 1;
        double temp = powfn(x,n/2);
        if(n%2 == 0){
            return temp*temp;
        }
        return temp*temp*x;
    }
    double myPow(double x, int n) {
        long long N = llabs(n);
        double res = powfn(x,N);
        return n<0 ? 1/res: res; 
    }
};

// time complexity : O(logn)
// space : O(logn)