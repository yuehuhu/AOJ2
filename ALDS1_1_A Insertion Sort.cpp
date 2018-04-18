#include<iostream>
#include<cstdio>
#include<algorithm>
#define Lens 105
using namespace std;
int a[Lens];
int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < N; i++)
	{
		int j = i;
		while (j > 0)
		{
			if (a[j] < a[j - 1])
			{
				swap(a[j], a[j - 1]);
				j--;
			}

			else
				break;
		}
		for (int s = 0; s < N; s++)
		{
			if (s > 0)
				cout << ' ';
			cout << a[s];
			
		}
		cout << endl;
	}
	return 0;
}