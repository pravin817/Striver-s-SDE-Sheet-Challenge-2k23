// Link : https://www.codingninjas.com/codestudio/problems/unique-paths_8230802?challengeSlug=striver-sde-challenge&leftPanelTab=0

// Brute Force

int countPath(int i, int j, int m, int n)
{
    // Base case 1 Reached to target position
    if (i == m - 1 && j == n - 1)
    {
        return 1;
    }

    // Base case : 2 : Reach the out of matrix
    if (i >= m || j >= n)
    {
        return 0;
    }

    // Small Calculation + recursive call
    else
    {
        return countPath(i, j + 1, m, n) + countPath(i + 1, j, m, n);
    }
}
int uniquePaths(int m, int n)
{
    // 0 0 are the starting positions
    return countPath(0, 0, m, n);
}
/*
    Analysis:
    Time complexity : Exponetial
    Space Complexity : Exponetail
*/

// The above solutions gives TLE

// By using DP

int uniquePaths(int m, int n)
{
    vector<vector<int>> dp(m, vector<int>(n, 1));

    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
    return dp[m - 1][n - 1];
}

/*
    Analysis:
    Time Complexity : O(m*n)
    Space Complexity : O(m*n)
*/

// More Optimised Based on formula : nCr

#include <bits/stdc++.h>
int uniquePaths(int m, int n)
{
    int N = m + n - 2;

    int r = m - 1;

    double res = 1;

    for (int i = 1; i <= r; i++)
    {
        res = res * (N - r + i) / i;
    }

    return (int)res;
}

/*
    Analysis:
    Time Complexity : O(m-1)
    Space Complexity : O(1)
*/