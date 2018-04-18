#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int tmp = a%b;
	while (tmp != 0)
	{
		a = b;
		b = tmp;
		tmp = a%b;
	}
	cout << b << endl;
	return 0;
}