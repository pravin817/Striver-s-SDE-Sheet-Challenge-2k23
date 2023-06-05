// Link : https://www.codingninjas.com/codestudio/problems/maximum-subarray-sum_8230694?challengeSlug=striver-sde-challenge

long long maxSubarraySum(int arr[], int n)
{
    long long maxi = 0;
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {

        sum += arr[i];
        maxi = max(maxi, sum);

        if (sum < 0)
            sum = 0;
    }

    return maxi;
}

/*
    Analysis:
    Time Compelxity : O(n)
    Space Complexity : O(1)
*/