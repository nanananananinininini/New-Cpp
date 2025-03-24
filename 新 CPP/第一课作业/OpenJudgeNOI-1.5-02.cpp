#include <iostream>
#include <iomanip>
using namespace std;

double calculateAverageBalance();

int main() {
    double average = calculateAverageBalance();
    cout << fixed << setprecision(2) << "$" << average << endl;
    return 0;
}

double calculateAverageBalance() {
    double total = 0;
    double balance;
    for (int i = 0; i < 12; ++i) {
        cin >> balance;
        total += balance;
    }
    return total / 12;
}    
