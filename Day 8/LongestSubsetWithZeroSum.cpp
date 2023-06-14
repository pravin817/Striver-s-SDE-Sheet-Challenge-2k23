// Link : https://www.codingninjas.com/codestudio/problems/longest-subarray-zero-sum_8230747?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector<int> arr)
{

    // brute force

    int maxi = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < arr.size(); j++)
        {
            sum += arr[j];

            if (sum == 0)
            {
                maxi = max(maxi, j - i + 1);
            }
        }
    }

    return maxi;
}

/*
  Analysis:
  Time Complexity : O(N^2)
  Space Complexity : O(1)
*/

#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector<int> arr)
{

    // Optimised

    unordered_map<int, int> mp;

    for (int i = 1; i < arr.size(); i++)
    {
        arr[i] += arr[i - 1];
    }

    int maxi = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
            maxi = i + 1;
        else if (mp.find(arr[i]) != mp.end())
        {
            maxi = max(maxi, i - mp[arr[i]]);
        }
        else
        {
            mp[arr[i]] = i;
        }
    }

    return maxi;
}

/*
  Analysis:
  Time Complexity : O(N)
  Space Complexity : O(N)
*/