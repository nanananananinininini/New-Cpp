#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i, n, sum;
	
	//sum 金币总和
	//i 循环变量
	//n 用户输入 总计算天数（被读入）
	cin >> n;
	
	i = 1;
	sum = 0;
	while(n >= i)
	{
		sum = sum + i * i;
		n = n - i;
		i++;
	}
	sum = sum + n * i;
	
	cout << sum;
	return 0;
}
