#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c;
	int dem_num;
	
	for(a = 1; a <= 6; a++)
	{
		for(c = 1; c <= 6; c++)
		{
			b = 24 * a - 40 * c;
			
			if(b >= 0 && b <= 6)
			{
				dem_num = a * 49 + b * 7 + c;
			}
		}
	}
	cout << dem_num << endl;
	cout << a << b << c << endl;
	cout << c << b << a << endl;
	return 0;
}

