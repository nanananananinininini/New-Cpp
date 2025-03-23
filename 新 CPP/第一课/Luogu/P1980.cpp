#include<bits/stdc++.h>
using namespace std;

int cntof(int n, int x);

int main()
{
	int i, n, x;
	int cnt;
	
	cin >> n >> x;
	cnt = 0;
	for(i = 1; i <= n; i++)
	{
		cnt = cnt + cntof(i, x);
	}
	cout << cnt;
	return 0;
}

int cntof(int n, int x)
{
	int cnt;
	
	cnt = 0;
	while(n > 0)
	{
		if(n % 10 == x)
		{
			cnt++;
		}
		n = n / 10;
	}
	return(cnt);
	
}
