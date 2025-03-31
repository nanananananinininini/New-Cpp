#include <iostream>
using namespace std;

int main() {
    int m, k, cnt = 0, temp;
    bool canDiv19;
    cin >> m >> k;
    canDiv19 = (m % 19 == 0);
    
    temp = m;
    while (temp > 0) {
        if (temp % 10 == 3) {
            cnt++;
        }
        temp /= 10;
    }
    
    if (canDiv19 && cnt == k) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
    
