#include<bits/stdc++.h>
using namespace std;
//P2669.cpp

int main()
{
	int days, sum;
	cin >> days;
	
	int i;
	sum = 0;
	while(days >= i)
	{
		sum = sum + i * i;
		days = days - i;
		i = i + 1;
	}
	sum = sum + days * i;
	
	cout << sum << endl;

	return 0;
}

