// Link : https://www.codingninjas.com/codestudio/problems/single-element-in-a-sorted-array_8230826?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h>

int singleNonDuplicate(vector<int> &arr)
{
    // By Using the Map

    map<int, int> mp;

    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
    }

    // find the single element

    for (auto m : mp)
    {
        if (m.second == 1)
            return m.first;
    }
}

/*
    Analysis:
    Time Complexity : O(n)
    Space Complexity : O(1)
*/

#include <bits/stdc++.h>

int singleNonDuplicate(vector<int> &arr)
{
    // By XOR

    int ans = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

/*
    Analysis:
    Time Complexity : O(n)
    Space Complexity : O(1)
*/

// First Two solution gives TLE

int singleNonDuplicate(vector<int> &nums)
{
    int high = nums.size() - 1;
    int low = 0;
    int mid;

    // Boundary cases
    if (high == 0)
        return nums[0];
    else if (nums[0] != nums[1])
        return nums[0];
    else if (nums[high] != nums[high - 1])
        return nums[high];

    while (low <= high)
    {
        mid = low + (high - low) / 2;
        // Unique element condition
        if (nums[mid] != nums[mid + 1] && nums[mid] != nums[mid - 1])
            return nums[mid];

        if (((mid % 2) == 0 && nums[mid] == nums[mid + 1]) || ((mid % 2) == 1 && nums[mid] == nums[mid - 1]))
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

/*
    Analysis:
    Time Complexity : O(logn)
    Space Complexity : O(1)
*/