// Link : https://www.codingninjas.com/codestudio/problems/pair-sum_8230699?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    unordered_map<int, int> umap;
    vector<vector<int>> ans;

    for (auto ele : arr)
    {
        int count = umap[s - ele];

        vector<int> pair(2);
        pair[0] = ele;
        pair[1] = s - ele;

        while (count--)
        {
            ans.push_back(pair);
        }

        umap[ele] += 1;
    }

    // Now sort the ans

    for (int i = 0; i < ans.size(); i++)
    {
        vector<int> temp = ans[i];
        sort(temp.begin(), temp.end());
        ans[i] = temp;
    }

    sort(ans.begin(), ans.end());

    return ans;
}