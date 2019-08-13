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

    string a, b;
    cin >> a >> b;
    if (len(a) != len(b)) {
        cout << "NO" << '\n';
        return 0;
    }
    vector<int> dif;
    for(int i = 0; i < len(a); i++) {
        if (a[i] != b[i]) {
            dif.pb(i);
        }
    }
    if (len(dif) != 2) {
        cout << "NO" << '\n';
        return 0;
    }
    swap(a[dif[0]], a[dif[1]]);

    cout << (a == b ? "YES" : "NO") << '\n';

    return 0;
}