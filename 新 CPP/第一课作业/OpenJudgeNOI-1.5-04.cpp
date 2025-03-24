#include <iostream>
#include <iomanip>
using namespace std;

void calcSumAvg(int arr[], int n, int& sum, double& average) {
    sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    average = static_cast<double>(sum) / n;
}

int main() {
    int n;
    cin >> n;
    int arr[10000];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int sum;
    double average;
    calcSumAvg(arr, n, sum, average);
    cout << sum << " " << fixed << setprecision(5) << average << endl;
    return 0;
}    
