#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long num;
	cin >> num;
	
//	if (num == 1)
//	{
//		cout << "End" << endl;
//		return 0;
//	}
	
	while (num != 1)
	{
		if(num % 2 == 1)
		{
			long long next;
			next = num * 3 + 1;
			cout << num << "*3+1=" << next << endl;
			num = next;
		}
		else
		{
			long long next = num / 2;
			cout << num << "/2=" << next << endl;
			num = next;
		}
	}
	
	cout << "End" << endl;
	return 0;
}

