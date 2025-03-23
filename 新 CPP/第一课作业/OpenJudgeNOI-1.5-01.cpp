#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    double total_age = 0;

    for (int i = 0; i < n; ++i) {
        int age;
        cin >> age;
        total_age += age;
    }

    cout << fixed << setprecision(2) << total_age / n << endl;

    return 0;
}
    
