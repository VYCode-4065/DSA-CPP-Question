#include <iostream>
#include <vector>
using namespace std;
int MaxProfit(vector<int> prices)
{

    int maxProfit = 0, bestBuy = prices[0];

    for (auto n : prices)
    {
        if (maxProfit < n)
        {
            maxProfit = max(maxProfit, n - bestBuy);
        }
        bestBuy = min(bestBuy, n);
    }
    return maxProfit;
}
int main()
{

    vector<int> prices = {7, 1, 5, 6, 3, 4};

    cout << "Maximum profit is : " << MaxProfit(prices) << endl;
    return 0;
}