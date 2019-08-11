#include <bits/stdc++.h>

using namespace std;
inline void FAST_IO(){ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define len(a) (int)(a).size()
#define ll long long
#define pb push_back
#define ff first
#define ss second


int main() {
    FAST_IO();

    ll n, a, b, sq = 0;
    cin >> n;
    
    vector<ll> vs;
    for(int i = 0; i < n; i++) {
        cin >> a;
        if (i == 0) {
            sq++;
            b = a;
            continue;
        }

        if (a == b) {
            sq++;
        }
        else {
            vs.pb(sq);
            sq = 1;
        }

        b = a;
    }
    vs.pb(sq);

    ll ans = 0;
    for(int i = 1; i < len(vs); i++)
        ans = max(ans, min({vs[i], vs[i-1]}));

    cout << ans*2 << '\n';

    return 0;
}