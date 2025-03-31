#include <bits/stdc++.h>
using namespace std;


int n, t, e, i;
double br, nr;
string r;

string judge();

int main() {
    cin >> n;
    cin >> t >> e;
    br = static_cast<double>(e) / t;

    for (i = 1; i < n; ++i) {
        cin >> t >> e;
        nr = static_cast<double>(e) / t;
        r = judge();
        cout << r << endl;
    }

    return 0;
}

string judge() {
    if (nr - br > 0.05) {
        return "better";
    } else if (br - nr > 0.05) {
        return "worse";
    } else {
        return "same";
    }
}
    
