#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int min_val = 1000, max_val = 0;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num < min_val) min_val = num;
        if (num > max_val) max_val = num;
    }

    cout << max_val - min_val << endl;
    return 0;
}    
