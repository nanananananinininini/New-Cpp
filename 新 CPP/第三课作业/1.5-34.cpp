//循环计算 ：使用一个循环从 1 到 n 遍历每个正整数。在每次循环中，计算当前数的阶乘，并将其累加到累加和中。
//阶乘计算 ：在循环中，通过将当前的阶乘值乘以当前的循环数，得到当前数的阶乘。例如，当计算 2 的阶乘时，将之前的阶乘值 1 乘以 2 ，得到 2 ；计算 3 的阶乘时，将之前的阶乘值 2 乘以 3 ，得到 6 ，以此类推。
//累加阶乘 ：将每次计算得到的阶乘值累加到累加和中。

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum, jiecheng;
    cin >> n;
    sum = 0;
    jiecheng = 1;

    for (int i = 1; i <= n; i++) {
        jiecheng *= i;  
        sum += jiecheng;  
    }

    cout << sum;

    return 0;
}