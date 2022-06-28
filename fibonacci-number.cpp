class Solution {
public:
    int fib(int n) {
        int dp[n+1];
        memset(dp, -1, sizeof(dp));
        int res = fibonacci(n, dp);
        return res;
    }
    
    int fibonacci(int n, int dp[]){
        if(n==0 || n==1){
            dp[n] = n;
            return dp[n];
        }

        if(dp[n-1]!=-1){
            return dp[n-1];
        }

        if(dp[n-2]!=-1){
            return dp[n-2];
        }

        else{
            dp[n-1] = fibonacci(n-1, dp) + fibonacci(n-2, dp);
            return dp[n-1];
        }
    }
};
