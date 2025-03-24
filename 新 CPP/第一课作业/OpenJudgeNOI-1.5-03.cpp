#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_SIZE = 100;

int main() {
    int n;
    cin >> n;

    double data[MAX_SIZE];
    double sum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> data[i];
        sum += data[i];
    }

    double mean = sum / n;
    cout << fixed << setprecision(4) << mean << endl;

    return 0;
}
    
