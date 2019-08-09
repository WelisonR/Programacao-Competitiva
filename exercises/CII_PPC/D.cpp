#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    vector<int> vs;
    cin >> n;

    // int less = numeric_limits<int>::max(), high = numeric_limits<int>::min();
    int less = 0, high = 0;
    for(int i = 0; i < n; i++) {
        cin >> x;
        vs.push_back(x);

        if (i == 0 || x > high) high = x;
        if (i == 0 || x < less) less = x;
    }

    int pos1 = 0, pos2 = 0;
    for(int i = 0; i < vs.size(); i++) {
        if (vs[i] == high) {
            pos1 = i;
            break;
        }
    }

    for(int i = vs.size()-1; i >= 0; i--) {
        if (vs[i] == less) {
            pos2 = i;
            break;
        }
    }

    int ans1 = pos1, ans2 = vs.size()- 1 - pos2;

    int ans = ans1+ans2;
    // menor a esquerda do maior
    if (pos2 < pos1) ans--;

    cout << ans << '\n';

    return 0;
}