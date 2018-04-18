#include<iostream>
#include<cstdio>
#include<algorithm>
#include<math.h>
#define Lens 105
#define Inf -1<<21
using namespace std;
int N;
int a[Lens];
int main()
{
	cin >> N;
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = N-1; j > i; j--)
		{
			if (a[j] < a[j - 1])
			{
				swap(a[j], a[j - 1]);
				sum++;
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		if (i > 0)
			cout << ' ';
		cout << a[i];
	}
	cout << endl;
	cout << sum << endl;
	return 0;
}