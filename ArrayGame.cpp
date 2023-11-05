#include<iostream>
#include<vector>

using namespace std;
int getWinner(vector<int>& arr, int k) {
    int size = arr.size();
    if (k >= size)
    {
        return *max_element(arr.begin(), arr.end());
    }
    int count = 0;

    int winner = arr[0];
    for (int i = 1;i < size;i++)
    {
        if (winner > arr[i])
        {
            count++;
        }
        else
        {
            winner = arr[i];
            count = 1;
        }
        if (count == k)
        {
            return winner;
        }
    }
    return winner;
}
int main()
{
	
	return 0;
}