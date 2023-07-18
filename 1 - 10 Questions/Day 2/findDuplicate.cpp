// Link : https://www.codingninjas.com/codestudio/problems/find-duplicate-in-array_8230816?challengeSlug=striver-sde-challenge&leftPanelTab=1

// Brute force : GIVES TLE

int findDuplicate(vector<int> &arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                return arr[i];
        }
    }
}

/*
    Analysis:
    Time Complexity : O(N^2)
    Space Compelxity : O(1)
*/



int findDuplicate(vector<int> &arr, int n)
{
    // Using the sorting

    sort(arr.begin(), arr.end());

    // Now find the duplicate element

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            return arr[i];
        }
    }
}


/*
    Analysis:
    Time Complexity : O(nlogn)
    Space complexity : O(1) --> Auxillary Space
*/

// Using the Map

int findDuplicate(vector<int> &arr, int n)
{
    // By using the mp

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    // Find the duplicate element

    for (auto m : mp)
    {
        if (m.second >= 2)
            return m.first;
    }
}

/*
    Analysis:
    Time Complexity : O(n)
    Space complexity : O(n)
*/