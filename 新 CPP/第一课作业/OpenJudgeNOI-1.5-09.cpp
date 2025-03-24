#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int arr[320];
    int index = 0;
    for (int i = m; i <= n; i++) {
        if (i % 2 != 0) {
            arr[index] = i;
            index++;
        }
    }
    int sum = 0;
    for (int i = 0; i < index; i++) {
        sum += arr[i];
    }
    cout << sum << endl;
    return 0;
}    
