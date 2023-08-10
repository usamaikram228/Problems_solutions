#include<iostream>
using namespace std;
string convert(string s, int numRows) {
    int length = s.length();
    int circulate = 2* numRows - 2;
    
    string returnResult = "";
    for (int i = 0; i < numRows;i++)
    {
        for (int j = 0; j + i < length;j += circulate)
        {
            returnResult += s[i + j];
        
            
            if (i != 0 && i != numRows - 1 )
            {
                if (j + circulate - i < length)
                {
                    returnResult += s[j + circulate - i];

                }
            }
        }
    }
    return returnResult;
}
int main()
{
    string input = "abcdefghijklmnop";
    int numRows = 4;

    string result = convert(input, numRows);
    cout << "Zigzag pattern: " << result << endl;
	return 0;
}