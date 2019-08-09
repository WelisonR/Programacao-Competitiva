#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int less = 0, high = 0, ans = 0, value;
    for(int i = 0; i < n; i++) {
        cin >> value;

        if (i == 0) {
            less = value;
            high = value;
        }

        if (value < less) {
            less = value;
            ans++;
        }

        if (value > high) {
            high = value;
            ans++;
        }
    }

    cout << ans << '\n';

    return 0;
}