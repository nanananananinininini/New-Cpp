#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i, n, sum = 0;
	
	cin >> n;
	
	for(i = 1; i < n; i++)
	{
		if(n % i == 0)
		{
			sum = sum + i;
		}
	}
	
	if (sum == n)
	{
		cout<<1;
	}
	else
	{
		cout<<2;
	}
	return 0;
}
