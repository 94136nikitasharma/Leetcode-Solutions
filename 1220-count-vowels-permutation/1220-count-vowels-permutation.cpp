class Solution {
public:
    
    int countVowelPermutation(int n) {
        long long dp[n][5];
        int mod=1e9+7;
        for(int i=0;i<5;i++){
            dp[0][i]=1;
        }
        for(int i=1;i<n;i++){
            dp[i][0] = (dp[i-1][1] + dp[i-1][2] + dp[i-1][4])%mod;
            
            dp[i][1] = (dp[i-1][2] + dp[i-1][0])%mod;
            
            dp[i][2] = (dp[i-1][1] + dp[i-1][3])%mod;
            
            dp[i][3] = (dp[i-1][2])%mod;
            
            dp[i][4] = (dp[i-1][3] + dp[i-1][2])%mod;
        }
        long long int sum=0;
        
        for(int i=0;i<5;i++){
            sum+=dp[n-1][i];
            sum%=mod;
        }
        
        return sum;
        
    }
};