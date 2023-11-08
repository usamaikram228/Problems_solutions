#include<iostream>
#include<vector>

using namespace std;
string reverseVowels(string s) {

    int size = s.length();
    int i = 0;
    int j = size - 1;
    bool flagOne = false;
    bool flagTwo = false;
    while (i < j)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            flagOne = true;
        }
        else
        {
            flagOne = false;
            i++;
        }
        if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u'
            || s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U')
        {
            flagTwo = true;
        }
        else
        {
            flagTwo = false;
            j--;
        }
        if (flagOne && flagTwo)
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
    return s;
}
int main()
{
    cout << reverseVowels("leetcode");
	return 0;
}