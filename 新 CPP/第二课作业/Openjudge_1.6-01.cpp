#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[100];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] == m) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}    
