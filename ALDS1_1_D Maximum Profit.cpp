#include<iostream>
#include<cstdio>
#include<algorithm>
#include<math.h>
#define Lens 200005
#define Inf -1<<21
using namespace std;
int N;
int a[Lens];
int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	int largest = a[1] - a[0];
	int mini = min(a[0],a[1]);
	for (int i = 2; i < N; i++)
	{
		if (a[i] < mini)
			mini = a[i];
		else if (a[i] - mini > largest)
			largest = a[i] - mini;
	}
	cout << largest << endl;
	return 0;
}