#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i, n, sum;
	
	//sum ����ܺ�
	//i ѭ������
	//n �û����� �ܼ��������������룩
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
