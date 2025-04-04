#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i, n, x, y;
	int zuichang;
	int dangqian;
	
	cin >> n;
	dangqian = 0;
	zuichang = 0;
	for(i = 1; i <= n; i++)
	{
		cin >> x >> y;
		if()//Õý³£
		{
			dangqian++;
			zuichang = max(zuichang, dangqian); 
		}
		else
		{
			dangqian = 0;
		}
	}
	cout << zuichang;
	return 0;
}
