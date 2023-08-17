#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int size = nums.size();
    if (k > size)
    {
        k = k % size;
    }
    if (k == 0)
    {
        return;
    }
    for (int i = 0, j = size - k - 1; i < j;i++, j--)
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    for (int i = size - k, j = size - 1;i < j;i++, j--)
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    for (int i = 0, j = size - 1;i < j;i++, j--)
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}

int main()
{
    vector<int> array = { 3,4,6,1,2,4,5 };
    rotate(array, 3);
	return 0;
}