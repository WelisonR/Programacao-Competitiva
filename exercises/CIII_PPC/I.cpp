#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;

    int i, a, b, c, d, e, f, g;
    cin >> a >> b >> c >> d >> e >> f >> g;

    vector<int> vs {a, b, c, d , e, f, g};
    for(i = 0; n > 0; i++) {
        if (i > 6) i = 0;
        
        n-= vs[i];
    }
    
    cout << i << '\n';

    return 0;
}