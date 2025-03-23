#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, n;
    cin >> a >> n;

    int result = 1;
    if (n == 0) 
	{
        result = 1;
    }
	else 
	{
        for (int i = 0; i < n; i++) {
            result = result * a;
        }
    }
    cout << result;
    
    return 0;
}    
