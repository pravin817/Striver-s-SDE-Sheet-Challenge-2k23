class Solution
{
public:
    int nCr(int n, int r)
    {

        // Base condition

        if (r > n)
        {
            return 0;
        }

        // as nCr = nC(n-r)
        if (r > n - r)
        {
            r = n - r;
        }

        // make dp
        int dp[r + 1];

        // used the set the value to 0 for the ap array of given size
        memset(dp, 0, sizeof(dp));

        // Initilise

        dp[0] = 1;

        int mod = 1000000007;

        for (int i = 1; i <= n; i++)
        {
            for (int j = min(r, i); j > 0; j--)
            {

                // update dp

                dp[j] = (dp[j] + dp[j - 1]) % mod;
            }
        }

        return dp[r];
    }
};

/*
    Analysis:
    Time Complexity : O(n*r)
    Space Complexity : O(r)
*/