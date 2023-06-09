// Link : https://www.codingninjas.com/codestudio/problems/majority-element-ii_8230738?challengeSlug=striver-sde-challenge&leftPanelTab=0

vector<int> majorityElementII(vector<int> &arr)
{
    vector<int> ans;

    map<int, int> mp;

    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
    }

    // Find the majority element

    int test = arr.size() / 3;

    for (auto m : mp)
    {
        if (m.second > test)
            ans.push_back(m.first);
    }

    return ans;
}

        // Boyer-Moore Voting Algorithms

vector<int> majorityElementII(vector<int> &nums)
{
    int num1 = INT_MIN, num2 = INT_MIN;
    int count1 = 0, count2 = 0;
    int n = nums.size();

    for (auto ele : nums)
    {
        if (num1 == ele)
        {
            count1++;
        }
        else if (num2 == ele)
        {
            count2++;
        }
        else if (count1 == 0)
        {
            count1 = 1;
            num1 = ele;
        }
        else if (count2 == 0)
        {
            count2 = 1;
            num2 = ele;
        }
        else
        {
            count1--;
            count2--;
        }
    }

    vector<int> ans;

    int countMajority = n / 3;

    count1 = 0, count2 = 0;

    for (auto ele : nums)
    {
        if (num1 == ele)
        {
            count1++;
        }

        if (num2 == ele)
        {
            count2++;
        }
    }

    if (count1 > countMajority)
    {
        ans.push_back(num1);
    }

    if (count2 > countMajority)
    {
        ans.push_back(num2);
    }

    return ans;
}

/*
    Anlysis:
    Time Complexity : O(n)
    Space Complexity : O(1)
*/