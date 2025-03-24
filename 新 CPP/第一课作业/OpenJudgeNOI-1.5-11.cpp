#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int main() {
    int k;
    cin >> k;

    int numbers[MAX_SIZE];
    int count[11] = {0};

    for (int i = 0; i < k; ++i) {
        cin >> numbers[i];
        count[numbers[i]]++;
    }

    cout << count[1] << endl;
    cout << count[5] << endl;
    cout << count[10] << endl;

    return 0;
}    
