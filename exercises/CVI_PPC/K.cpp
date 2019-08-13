#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
inline void FAST_IO(){ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}

#define pb push_back
#define ff first
#define ss second
#define len(a) (int)(a).size()
#define all(x) x.begin(), x.end()
#define debug(x) cout << "> x:" << x << endl;

int main() {
    FAST_IO();

    int n, k, value, ans = -1;
    cin >> n >> k;

    vector<int> a;
    for(int i = 0; i < n; i++) {
        cin >> value;
        a.pb(value);
    }
    for(int i = n-1; i >= 0; i--) {
        if (a[i] != a[n-1]) break;
        ans = i;
    }
    if (ans > k-1) cout << "-1" << '\n';
    else cout << ans << '\n';

    return 0;
}