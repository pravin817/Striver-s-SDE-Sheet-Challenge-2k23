// Link : https://www.codingninjas.com/codestudio/problems/count-inversions_8230680?challengeSlug=striver-sde-challenge&leftPanelTab=0
#include <bits/stdc++.h>
long long getInversions(long long *arr, int n)
{
    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j] && i < j)
            {
                ans++;
            }
        }
    }

    return ans;
}

/*
    Anlysis:
    Time Complexity : O(n^2)
    Space Complexity : O(1)
*/

// Merge Sort

#include <bits/stdc++.h>

long long merge(long long *arr, int n, int left, int mid, int right)
{

    long long leftArrSize = (mid - left + 1);
    long long rightArrSize = (right - (mid + 1)) + 1; // (right - mid)

    long long ret = 0;
    long long *leftArr = new long long[leftArrSize];
    long long *rightArr = new long long[rightArrSize];

    for (int i = 0; i < leftArrSize; i++)
        leftArr[i] = arr[left + i];
    for (int j = 0; j < rightArrSize; j++)
        rightArr[j] = arr[mid + 1 + j];

    int i, j, k;
    i = j = 0;
    k = left;

    while (i < leftArrSize && j < rightArrSize)
    {
        if (leftArr[i] <= rightArr[j])
        {
            arr[k] = leftArr[i];
            i++;
        }
        else
        {
            ret += (mid - (left + i) + 1);
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < leftArrSize)
    {
        arr[k++] = leftArr[i++];
    }

    while (j < rightArrSize)
    {
        arr[k++] = rightArr[j++];
    }

    delete[] leftArr;
    delete[] rightArr;

    return ret;
}

long long mergeSort(long long *arr, int n, int left, int right)
{
    long long ret = 0;
    if (left < right)
    {
        long long mid = (left + ((right - left) >> 1));
        ret += mergeSort(arr, n, left, mid);
        ret += mergeSort(arr, n, mid + 1, right);
        ret += merge(arr, n, left, mid, right);
    }
    return ret;
}

long long getInversions(long long *arr, int n)
{
    return mergeSort(arr, n, 0, n - 1);
}