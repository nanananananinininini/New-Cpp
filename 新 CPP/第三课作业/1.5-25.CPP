#include<bits/stdc++.h>
using namespace std;

int main()
{
    for(int q_bai = 1; q_bai <= 6; q_bai++)
    {
        for(int q_ge = 1; q_ge <= 6; q_ge++)
        {
            int q_shi = 24 * q_bai - 40 * q_ge;
            if(q_shi >= 0 && q_shi <= 6)
            {
                int num = q_bai * 49 + q_shi * 7 + q_ge;
                
                // 验证九进制表示
                string sep = to_string(q_bai) + to_string(q_shi) + to_string(q_ge);
                string sen;
                for(int n=num; n; n /= 9)
                {
                    sen = to_string(n % 9) + sen;
                }
                
                if(sen == string("") + char('0' + q_ge) + char('0' + q_shi) + char('0' + q_bai))
                {
                    cout << num << "\n"
                         << sep << "\n" 
                         << sen << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}

// 变量名介绍
// 1. q_bai ：七进制数的百位数（q代表七进制，bai表示百位）
// 2. q_shi ：七进制数的十位数
// 3. q_ge ：七进制数的个位数
// 4. num ：计算得到的十进制数
// 5. sep ：七进制数的字符串表示
// 6. sen ：九进制数的字符串表示

// 程序逻辑
// 1. 外层循环枚举七进制数的百位数 q_bai，范围为1到6。
// 2. 内层循环枚举七进制数的个位数 q_ge，范围为1到6。
// 3. 计算七进制数的十位数 q_shi，使用公式 q_shi = 24 * q_bai - 40 * q_ge
// 4. 检查 q_shi 是否在合法范围内（0到6），如果是，则继续执行。
// 5. 计算十进制数 num，使用公式 num = q_bai * 49 + q_shi * 7 + q_ge
// 6. 构建七进制数的字符串表示 sep，使用字符串拼接的方式。
// 7. 计算九进制数的字符串表示 sen，使用字符串拼接的方式。
// 8. 验证 sen 是否等于 sep 的逆序表示。如果是，则输出 num、sep 和 sen，并结束程序。
// 9. 如果没有找到符合条件的七进制数和九进制数，则继续循环，直到找到为止。
// 10. 最后返回0，表示程序正常结束。

// 公式怎么来的
// 数学推导
// 建立等式： q_bai * 49 + q_shi * 7 + q_ge = q_ge * 81 + q_shi * 9 + q_bai，化简可得公式
// q_shi = 24 * q_bai - 40 * q_ge


// to_string 是 C++ 标准库 <string> 中提供的一个函数，用于将各种数值类型（如整数、浮点数等）转换为 std::string 类型的字符串。