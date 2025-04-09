#include <bits/stdc++.h>
using namespace std; 

string num;
string result;
int jinwei;

// 高精度乘法：将一个字符串表示的数乘以 2
string multiplyByTwo() {
    result = "";
    jinwei = 0;
    // 从字符串 num 的最后一位开始，逐位进行乘法运算
    for (int i = num.size() - 1; i >= 0; --i) {
        // 将当前字符转换为数字并乘以 2，再加上进位
        int digit = (num[i] - '0') * 2 + jinwei;
        // 将当前位计算结果的个位数添加到结果字符串中
        result.push_back(digit % 10 + '0');
        // 更新进位，用于下一位的计算
        jinwei = digit / 10;
    }
    // 如果最后还有进位，将进位添加到结果字符串的末尾
    if (jinwei) {
        // 将进位转换为字符并添加到结果字符串中
        result.push_back(jinwei + '0');
    }
    // 反转结果字符串，因为之前是从低位到高位构建的
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int N;
    cin >> N;

    num = "1";
    for (int i = 0; i < N; ++i) {
        num = multiplyByTwo();
    }

    cout << num << endl;

    return 0;
}

// num.size() 字符串的长度。
