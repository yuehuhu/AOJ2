#include<iostream>
#include<cstdio>
#include<algorithm>
#include<math.h>
#define Lens 10005

using namespace std;
int a[Lens];
int prime(int i)
{
	if (i == 2 || i == 3)
		return 1;
	if (!(i % 6 == 1 || i % 6 == 5))
		return 0;
	int m = sqrt(i);
	for (int s = 5; s <= m; s+=6)
	{
		if (i%s == 0 || i % (s + 2) == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int N;
	int sum = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
		if (prime(a[i]))
			sum++;
	}
	cout << sum << endl;
	return 0;
}