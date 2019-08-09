#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int s1 = size(a);

    bitset<101> as(a), bs(b);

    bitset<101> ans = as ^ bs;

    for(int i = s1-1; i >= 0; i--)
        cout << ans[i];
    cout << '\n';

    return 0;
}