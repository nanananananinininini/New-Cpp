#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a, b, c, ta = 0, tb = 0, tc = 0, tot = 0;

    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cin >> a >> b >> c;
        ta = ta + a;
        tb = tb + b;
        tc = tc + c;
    }
    tot = ta + tb + tc;
    cout << ta << " " << tb << " " << tc << " " << tot << endl;
    return 0;
}    
