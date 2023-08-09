class Solution {
  public:
    long long int count(int c[], int n, int sum) {

        // code here.
        vector<long long> dp(sum+1,0ll);
        sort(c,c+n);
        
        dp[0]=1;
        
        for(int i=0;i<n;i++){
            for(int j=c[i];j<=sum;j++){
                dp[j]+=dp[j-c[i]];
            }
        }

        return dp[sum];
    }
};