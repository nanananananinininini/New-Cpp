#include<bits/stdc++.h>
using namespace std;

//digitCount:���������� x ���ֵĴ��� 
//totalCount:�ۼ����������� x ���ֵĴ�����

int n, x;

int counter(int num)
{
    int digitCount;
    
    digitCount = 0;
    while(num > 0)
    {
        if (num % 10 == x)
        {
            digitCount++;
        }
        num = num / 10;
    }
    
    return digitCount;
}


int main()
{
    int totalCount;
    
    totalCount = 0;
    cin >> n >> x;
    for(int i = 1; i <= n; i++)
    {
        totalCount += counter(i);
    }
    cout << totalCount;
    return 0;
}
