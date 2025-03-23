#include <iostream>

using namespace std;

int main() {
    int n;
    int sum_of_known_angles;
    cin >> n;

    sum_of_known_angles = 0;
    for (int i = 0; i < n - 1; ++i) {
        int angle;
        cin >> angle;
        sum_of_known_angles += angle;
    }

    int total_angle_sum;
	total_angle_sum = (n - 2) * 180;
    int unknown_angle;
    unknown_angle = total_angle_sum - sum_of_known_angles;

    cout << unknown_angle << endl;

    return 0;
}
    
