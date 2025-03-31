#include <iostream>
using namespace std;

int a, b;
double p;
double s;
int r;

int calc();

int main() {
    cin >> a >> b;
    p = 200;
    s = 0;
    r = calc();
    if (r > 0) {
        cout << r << endl;
    } else {
        cout << "Impossible" << endl;
    }
    return 0;
}

int calc() {
    for (int i = 1; i <= 20; ++i) {
        s += a;
        if (s >= p) {
            return i;
        }
        p *= (1 + static_cast<double>(b) / 100);
    }
    return 0;
}
    
