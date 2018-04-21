#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include<queue>
#include<string>
#define Lens 105
#define Nil -1
using namespace std;
struct work
{
	string s;
	int key;
};

int N, limit;
queue<work> Q;

int main()
{
	cin >> N >> limit;
	for (int i = 0; i < N; i++)
	{
		work w;
		cin >> w.s >> w.key;
		Q.push(w);
	}
	int sum = 0;
	while (!Q.empty())
	{
		work k = Q.front();
		Q.pop();
		if (k.key - limit > 0)
		{
			k.key -= limit;
			sum += limit;
			Q.push(k);
		}
		else
		{
			
			sum += k.key;
			cout << k.s << ' ' << sum << endl;
		}
	}
	return 0;

}