#include <bits/stdc++.h>
int findMinimumCoins(int amount)
{
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int ct = 0;
    for (int i = 8; i >= 0; i--)
    {
        while (amount >= coins[i])
        {
            amount -= coins[i];
            ct++;
        }
    }
    return ct;
}