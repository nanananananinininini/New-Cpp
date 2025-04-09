#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i, n, x, y;
	int est;
	int cur;
	
	cin >> n;
	cur = 0;
	est = 0;
	for(i = 1; i <= n; i++)
	{
		cin >> x >> y;
		if(x >= 90 && x <= 140 && y >= 60 && y <= 90)
		{
			cur++;
			est = max(est, cur); 
		}
		else
		{
			cur = 0;
		}
	}
	cout << est;
	return 0;
}

// - 变量说明 ：

// - est ：存储最大连续满足条件的长度
// - cur ：存储当前连续满足条件的长度
// - n ：记录输入的记录数
// - i ：循环计数器
// - x, y ：存储每条记录的血压值
// - 核心逻辑 ：

// - 使用for循环处理每条记录
// - 判断条件： x >= 90 && x <= 140 && y >= 60 && y <= 90 （检查血压是否在正常范围内）
// - 如果满足条件：
//   - 当前连续计数 cur 加1
//   - 更新最大连续计数 est = max(est, cur)
// - 如果不满足条件：
//   - 重置当前连续计数 cur = 0
// - 输出结果 ：

// - 最终输出最大连续满足条件的长度 est