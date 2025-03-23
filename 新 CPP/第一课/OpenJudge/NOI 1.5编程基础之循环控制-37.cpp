#include<iostream>
using namespace std;

int main()
{
	int m, n, x;
	
	cin >> m >> n >> x;
	while(1)
	{
		//1.³Ô
		x = x - m / n;
		if(m % n != 0)
		{
			x--;
		}
		if(x < 0)
		{
			break;
		}
		//2.¶·
		//3.³¤
		n = n + m / n;
	}
	cout << n << endl;
	return 0;
}
