#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> generate(int numRows) {
    std::vector<std::vector<int>> two_d_vector(numRows);

    for (int i = 0; i < numRows; ++i) {
        two_d_vector[i].resize(i + 1, 1);
    }


    int temp = 0;
    for (int i = 2; i < numRows;i++)
    {
        for (int j = 0; j <= i;j++)
        {
            if (j == 0 || j == i)
            {
                continue;
            }
            two_d_vector[i][j] = two_d_vector[i - 1][j] + two_d_vector[i - 1][j - 1];
        }
    }
    return two_d_vector;
}
int main()
{
	return 0;
}