#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>& prices) {
    int smallest = prices[0];
    int maximum = 0;
    int max = 0;
    int smallestIndex = -1;  // Initialize with an invalid value
    for (int i = 0; i < prices.size(); i++)
    {
        if (smallest > prices[i])
        {
            smallest = prices[i];
            smallestIndex = i;
        }
        if (smallestIndex == i) //if smallest stock is last index of loop
            continue;

        //find maximum
        maximum = prices[i] - smallest;
        if (max < maximum)
        {
            max = maximum;
        }

    }
    return max;

}
int main()
{
    return 0;
}