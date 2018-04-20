#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include<stack>
#include<string>
#define Lens 105
#define Nil -1
using namespace std;

int N, sum;
stack<int> s;
int main()
{
	string c;
	while (cin >> c)
	{
		if (c[0] == '+')
		{
			int a = s.top();
			s.pop();
			int b = s.top();
			s.pop();
			s.push(a + b);

		}
		else if (c[0] == '-')
		{
			int a = s.top();
			s.pop();
			int b = s.top();
			s.pop();
			s.push(b-a);
		}
		else if (c[0] == '*')
		{
			int a = s.top();
			s.pop();
			int b = s.top();
			s.pop();
			s.push(a * b);
		}
		else
		{
			int t = atoi(c.c_str());
			s.push(t);
		}
	}
	cout << s.top() << endl;
	return 0;
}