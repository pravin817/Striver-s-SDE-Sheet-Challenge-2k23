#include <bits/stdc++.h>
int uniqueSubstrings(string input)
{
    vector<int> map(26, 0);
    int j = 0;
    int maxi = 1;
    for (int i = 0; i < input.length(); i++)
    {
        map[input[i] - 'a']++;

        while (map[input[i] - 'a'] > 1)
        {
            map[input[j] - 'a']--;
            j++;
        }
        maxi = max(maxi, i - j + 1);
    }
    return maxi;
}