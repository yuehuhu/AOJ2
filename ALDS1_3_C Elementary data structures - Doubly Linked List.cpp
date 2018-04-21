#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include<queue>
#include<string>


using namespace std;
struct point
{
	int key;
	point *l, *r;
};

int N;
point *nil;
void init()
{
	nil = (point*)malloc(sizeof(point));
	nil->l = nil;
	nil->r = nil;
}

void insert(int k)
{
	point *p;
	p = (point*)malloc(sizeof(point));;
	p->key = k;
	nil->r->l = p;
	p->r = nil->r;
	nil->r = p;
	p->l = nil;

}

point* find(int k)
{
	point *p = nil->r;
	while (p->key != k&&p != nil)
	{
		p = p->r;
	}
	return p;

}

void ddelete(point *p, int k)
{
	if (p->key == k)
	{
		p->r->l = p->l;
		p->l->r = p->r;
		free(p);
	}
	else
		return;

}

void deletefirst()
{
	ddelete(nil->r,nil->r->key);
}

void deletelast()
{
	ddelete(nil->l,nil->l->key);
}

int main()
{
	cin >> N;
	string s;
	int k;
	init();
	for (int i = 0; i < N; i++)
	{
		cin >> s;
		if (s[0] == 'i')
		{
			cin >> k;
			insert(k);
		}
		else if (s[0] == 'd'&&s[6] == 'F')
		{
			deletefirst();
		}
		else if (s[0] == 'd'&&s[6] == 'L')
		{
			deletelast();
		}
		else
		{
			cin >> k;
			ddelete(find(k),k);
		}
	}
	point*p = nil->r;
	while (p->r != nil)
	{
		cout << p->key << ' ';
		p = p->r;
	}
	if (p != nil)
	{
		cout << p->key << endl;
	}

	return 0;

}