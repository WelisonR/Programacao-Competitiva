#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll n, k;
    cin >> n >> k;

    // [1, 3, 5, 7, 2, 4, 6] // 7
    // [1, 3, 5, 7, 2, 4, 6, 8] // 8
    ll ans = 0;
    ll div = ceil(n/2.0);
    if (k <= div) ans = 1+2*(k-1);
    else ans = (k-div)*2;

    cout << ans << '\n';

    return 0;
}