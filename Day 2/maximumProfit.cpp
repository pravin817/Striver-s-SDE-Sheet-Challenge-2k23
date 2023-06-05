// Link : https://www.codingninjas.com/codestudio/problems/best-time-to-buy-and-sell-stock_8230746?challengeSlug=striver-sde-challenge&leftPanelTab=0

int maximumProfit(vector<int> &prices)
{
    int mini = prices[0];
    int profit = 0;

    for (int i = 1; i < prices.size(); i++)
    {

        // find the difference
        int diff = prices[i] - mini;

        // Update the profit

        profit = max(profit, diff);

        // Update the mini

        mini = min(mini, prices[i]);
    }
    return profit;
}

/*
    Analysis:
    Time Complexity : O(n)
    Space Complexity : O(1)
*/