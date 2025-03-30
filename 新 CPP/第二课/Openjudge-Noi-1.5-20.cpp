#include<bits/stdc++.h>
using namespace std;

int h;
double sum, curBounce;

int main()
{
	cin >> h;
	
	sum = h;
	curBounce = h;
	for(int i = 1; i <= 9; i++)
	{
		sum = sum + curBounce;
		curBounce = curBounce / 2;
	}
	cout << sum << endl;
	cout << curBounce / 2 << endl;
	return 0;
}

