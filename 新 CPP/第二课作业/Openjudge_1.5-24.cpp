#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int mnh = 0;
    int cnh = 0;
    int ssy, sjy;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> ssy >> sjy;
        if(ssy >= 90 && ssy <= 140 && sjy >= 60 && sjy <= 90)
        {
            cnh++;
        }
        else
        {
            if(cnh > mnh)
            {
                mnh = cnh;
            }
            cnh = 0;
        }
    }

    if(cnh > mnh)
    {
        mnh = cnh;
    }
    cout << mnh << endl;
    return 0;
}    
