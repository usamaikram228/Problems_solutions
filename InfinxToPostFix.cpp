#include<iostream>
#include<string>
#include"Stack.h"
using namespace std;

int precendence(char c)
{
	if (c == '-' || c == '+')
		return 1;
	if (c == '*' || c == '/')
		return 2;
	if (c == '^')
		return 3;
	return 0;
}
string infixToPostFix(string str)
{
	int i = 0;
	Stack <char> s(str.length());

	string postFix = "";
	while (str[i] != '\0') 
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			//cout << i << endl;
			postFix = postFix + str[i];
			//cout << postFix;
			i++;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			postFix += str[i];
			i++;
		}
		else if (str[i] == '(') 
		{
			s.push(str[i]);
			//cout << s.Top();
			//cout << i << endl;
			i++;
		}
		else if (str[i] == ')')
		{
			//cout << i << endl;
			//s.push(str[i]);
			while (s.Top() != '(')
			{
				/*cout << i << endl;
				cout << s.Top() << endl;*/
				postFix += s.Top();
				s.pop();
			}
			s.pop();
			i++;
		}
		else 
		{
			while (!s.isEmpty() && precendence(str[i]) <= precendence(s.Top()))
			{
				postFix += s.Top();
				//cout << s.Top();
				s.pop();
			}
			s.push(str[i]);
			i++;
		}
	}
	while (!s.isEmpty())
	{
		postFix += s.Top();
		s.pop();
	}
	//cout << "Postfix" << postFix;
	return postFix;
}
int main()
{
	string s = "a+(b+c)";
	string s2 = "a+(b+}c+)";
	cout << infixToPostFix(s);
		return 0;
}