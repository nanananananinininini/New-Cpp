#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i, n, sum, jiecheng;
	
	cin >> n;
	sum = 0;
	jiecheng = 1;
	for(i = 1; i <= n; i++)
	{//把i的阶乘类加进来 
		jiecheng = jiecheng * i;
		sum = sum + jiecheng;
	}
	cout << sum; 
	return 0;
}
