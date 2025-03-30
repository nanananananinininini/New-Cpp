#include<bits/stdc++.h>
using namespace std;

int l, m; //l-length, m-areas_count
int a[10010]; // trees, 1-true, 0-false
int cnt; //tot. cnt.

int main()
{
	int x, y;
	
	cin >> l >> m;
	
	for(int i = 0; i <= l; i++)
	{
		a[i] = 1;
	}
	
	for(int i = 1; i <= m; i++)
	{
		cin >> x >> y;
		for(int j = x; j <= y; j++)
		{
			a[j] = 0;
		}
	}
	
	for(int i = 0; i <= l; i++)
	{
		if(a[i] == 1)
		{
			cnt++;
		}
	}
	cout << cnt; 
	return 0;
}

