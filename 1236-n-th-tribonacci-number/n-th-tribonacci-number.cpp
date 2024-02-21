class Solution {
public:
    int dp[38];
    int solve(int n)
    {
        if(n==0) return 0;
        else if(n==1) return 1;
        else if (n==2) return 1;
        if(dp[n]!=-1)
        return dp[n];
        dp[n]=solve(n-1)+solve(n-2)+solve(n-3);
        return dp[n];
    }
    int tribonacci(int n) 
    {
        memset(dp,-1,sizeof dp);
        dp[0]=0;
        dp[1]=1;
        dp[2]=1; 
        return   solve(n);  
    }
};