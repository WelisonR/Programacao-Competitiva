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
    
    ll n, m;
    cin >> n >> m;
    ll total = 0, value, pre = 0, cont = 0;
    for(ll i = 0; i < n; i++) {
        cin >> value;
        if (i == 0 || value <= pre) {
            pre = value;
            total += value;
            cont++;
        }
        if (cont == m) break;
    }
    cout << total << '\n';

    return 0;
}