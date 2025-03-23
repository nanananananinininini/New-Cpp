#include <iostream>

using namespace std;

int main() {
    int k;
    cin >> k;

    int fib[60];
    fib[1] = 1;
    fib[2] = 1;

    for (int i = 3; i <= k; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    cout << fib[k] << endl;

    return 0;
}
    
