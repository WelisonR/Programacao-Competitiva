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

    ll t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;

    ll leste = 0, oeste = 0, norte = 0, sul = 0;
    if (ex-sx < 0) {
        oeste = sx-ex;
    }
    if (ex-sx > 0) {
        leste = ex-sx;
    }
    if (ey-sy < 0) {
        sul = sy-ey;
    }
    if (ey-sy > 0) {
        norte = ey-sy;
    }

    string s;
    cin >> s;
    for(ll i = 0; i < len(s); i++) {
        if (s[i] == 'N' and norte > 0) norte--;
        if (s[i] == 'E' and leste > 0) leste--;
        if (s[i] == 'W' and oeste > 0) oeste--;
        if (s[i] == 'S' and sul > 0) sul--;
    
        if (leste == 0 and oeste == 0 and sul == 0 and norte == 0) {
            cout << i+1 << '\n';
            return 0;
        }
    }
    cout << -1 << '\n';

    return 0;
}