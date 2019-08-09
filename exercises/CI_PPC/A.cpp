#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;

    ll ax = 0, ay = 0, az = 0, x, y, z;
    for(int i = 0; i < n; i++) {
        cin >> x >> y >> z;
        ax += x;
        ay += y;
        az += z;
    }

    if (ax == 0 && ay == 0 && az == 0)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';

    return 0;
}