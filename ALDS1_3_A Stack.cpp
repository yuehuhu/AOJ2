#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include<stack>
#define Lens 105
#define Nil -1
using namespace std;

int N, sum;
stack<int> s;
int main()
{
	char c;
	while (cin >> c)
	{
		if (c == '+')
		{
			int a = s.top();
			s.pop();
			int b = s.top();
			s.pop();
			s.push(a + b);

		}
		else if (c == '-')
		{
			int a = s.top();
			s.pop();
			int b = s.top();
			s.pop();
			s.push(b-a);
		}
		else if (c == '*')
		{
			int a = s.top();
			s.pop();
			int b = s.top();
			s.pop();
			s.push(a * b);
		}
		else
		{
			int t = c-'0';
			s.push(t);
		}
	}
	cout << s.top() << endl;
	return 0;
}