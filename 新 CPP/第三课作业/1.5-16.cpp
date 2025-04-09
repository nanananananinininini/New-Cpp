#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    double price = 200;
    double rate = 1 + k/100.0;
    
    for(int i = 1; i <= 20; i++)
    {
        if(i * n >= price)
        {
            cout << i;
            return 0;
        }
        price = price * rate;
    }
    cout << "Impossible";
    return 0;
}