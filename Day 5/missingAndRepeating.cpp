// Link : https://www.codingninjas.com/codestudio/problems/missing-and-repeating-numbers_8230733?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    pair<int, int> ans;
    int realsum = 0;
    int rangesum = 0;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            // Repeating element
            ans.second = arr[i];
        }
        else
        {
            realsum += arr[i];
        }

        rangesum += (i + 1);
    }
    ans.first = (rangesum - realsum);
    return ans;
}