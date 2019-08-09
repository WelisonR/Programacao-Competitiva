#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int left1 = 0, right1 = 0, val1, val2;
    for (int i = 0; i < n; i++) {
        cin >> val1 >> val2;

        if (val1 == 1) left1++;
        if (val2 == 1) right1++;
    }

    int ans = 0;
    if (n-left1 > left1)
        ans = left1;
    else
        ans = n-left1;

    if (n-right1 > right1)
        ans += right1;
    else
        ans += n-right1;
    
    cout << ans << endl;

    return 0;
}