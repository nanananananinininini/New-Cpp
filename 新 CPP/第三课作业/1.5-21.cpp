#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long num;
	cin >> num;
	

	
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

// 算法核心是 while (num != 1) 循环，持续处理直到数字变为1
// 条件判断 if(num % 2 == 1) 检测数字是否为奇数：
// 奇数时：执行 num * 3 + 1 并输出计算过程
// 偶数时：执行 num / 2 并输出计算过程
// 每次处理后更新num的值