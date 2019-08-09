#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a, b, c, ans = 0;
    for(int i = 0; i < n; i++) {
        cin >> a >> b >> c;

        int sum = a+b+c;

        if (sum >= 2) ans++;
    }

    cout << ans << '\n';

    return 0;
}