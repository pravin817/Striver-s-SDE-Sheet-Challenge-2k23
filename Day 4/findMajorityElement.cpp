// Link : https://www.codingninjas.com/codestudio/problems/day-6-majority-element_8230731?challengeSlug=striver-sde-challenge&leftPanelTab=0

int findMajorityElement(int arr[], int n)
{
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    // Find the majority element

    int flag = floor(n / 2);
    for (auto m : mp)
    {
        if (m.second > flag)
            return m.first;
    }

    // majority element is not present

    return -1;
}

/*
    Analysis:
    Time Complexity : O(n)
    Space Complexity : O(n)
*/