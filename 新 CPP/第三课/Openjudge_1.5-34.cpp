#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i, n, sum, jiecheng;
	
	cin >> n;
	sum = 0;
	jiecheng = 1;
	for(i = 1; i <= n; i++)
	{//��i�Ľ׳���ӽ��� 
		jiecheng = jiecheng * i;
		sum = sum + jiecheng;
	}
	cout << sum; 
	return 0;
}
