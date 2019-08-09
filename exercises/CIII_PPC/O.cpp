#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;

    ll num_of_5s = 0, num_of_0s = 0, value;
    for(int i = 0; i < n; i++) {
        cin >> value;

        value == 5? num_of_5s++ : num_of_0s++;
    }

    // Not divisible by 10
    if (num_of_0s == 0)
        cout << -1 << '\n';
    else {
        // 45: first divisor
        if (num_of_5s < 9)
            cout << 0 << '\n';
        else {
            num_of_5s = (num_of_5s/9) * 9;
            for(int j = 0; j < num_of_5s; j++)
                cout << 5;
            for(int j = 0; j < num_of_0s; j++)
                cout << 0;
            cout << '\n';
        }
    }

    return 0;
}