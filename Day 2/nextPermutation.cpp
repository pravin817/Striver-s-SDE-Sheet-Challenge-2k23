// Link : https://www.codingninjas.com/codestudio/problems/next-permutation_8230741?challengeSlug=striver-sde-challenge

// By using STL
vector<int> nextPermutation(vector<int> &A, int n)
{
    next_permutation(A.begin(), A.end());
    return A;
}

// Actual implementation
vector<int> nextPermutation(vector<int> &A, int n)
{
    int ind = -1;

    for (int i = n - 2; i >= 0; i--)
    {
        if (A[i] < A[i + 1])
        {
            ind = i;
            break;
        }
    }

    if (ind == -1)
    {
        reverse(A.begin(), A.end());
        return A;
    }

    // Step 2: Find the next greater element
    //         and swap it with A[ind]

    for (int i = n - 1; i > ind; i--)
    {
        if (A[i] > A[ind])
        {
            swap(A[i], A[ind]);
            break;
        }
    }

    // Now reverse the remaining (right half)

    reverse(A.begin() + ind + 1, A.end());
    return A;
}

/*
    Analysis:
    Time Complexity : O(n)
    Space Complexity : O(1)
*/