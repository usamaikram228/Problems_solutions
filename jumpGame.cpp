#include<iostream>
#include <vector>
using namespace std;

bool canJump(vector<int>& nums) {
	int count = nums[0];
	int size = nums.size() - 1;
	int i = 0;
	int index = 0;
	while (i < nums.size())
	{
		if (count >= size - i)
		{
			return true;
		}
		if (count == 0)
		{
			return false;
		}
		int largest = 0;

		for (int j = 1, k = i + 1; j <= count;j++)
		{
			if (nums[k] >= size - j - i)
			{
				return true;
			}

			if (largest <= nums[k])
			{

				largest = nums[k];
				index = k;
			}
			if (nums[k] == 0 && nums[k + 1] == 0 && k + 1 < count)
			{
				largest = nums[k + 2];
				index = k;
			}

			k++;

		}
		count = nums[index];
		i = index;


	}
	return false;
}
int main()
{
	vector<int> array = { 8, 2, 4, 4, 4, 9, 5, 2, 5, 8, 8, 0, 8, 6, 
		9, 1, 1, 6, 3, 5, 1, 2, 6, 6, 0, 4, 8, 6, 0, 3, 2, 8, 7, 6, 5, 1, 7, 
		0, 3, 4, 8, 3, 5, 9, 0, 4, 0, 1, 0, 5, 9, 2, 0, 7, 0, 2, 1
		,0, 8, 2, 5, 1, 2, 3, 9, 7, 4, 7, 0, 0, 1, 8, 5, 6, 7, 5, 
		1, 9, 9, 3, 5, 0, 7, 5 };
	cout << canJump(array);
	return 0;
}