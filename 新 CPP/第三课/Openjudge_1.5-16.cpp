#include<bits/stdc++.h>
using namespace std;

int main()
{
	fangjia = 200;
	for(i = 1; i <= 20; i++)
	{
		//如果第i年能买，则输出i并退出  
		if(i * n >= fangjia)
		{
			cout << i;
			break;
		}
		fangjia = fangjia * lilv;
	}
	//如果没买成，则输出"" 
	return 0;
}
