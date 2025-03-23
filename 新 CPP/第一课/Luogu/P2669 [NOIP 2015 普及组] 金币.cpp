#include<bits/stdc++.h>
using namespace std;

int main()
{
	int days;
	cin >> days;
	
	int coins = 0;
	
	int coinsDays = 1;
	
	int jin = 1;
	
	for(int i = 1;i <= days;i++)
	{
		coins = coins + jin;
		if(coinsDays == jin)
		{
			jin ++;
			coinsDays = 1;
		}
		else
		{
			coinsDays = coinsDays + 1;
		}
	}
	
	cout << coins;
	
	return 0;
}
