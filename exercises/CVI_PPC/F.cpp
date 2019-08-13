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

    ll n, value;
    cin >> n;
    vector<ll> vs;
    map<ll, ll> mymp;
    for(int i = 0; i < n; i++) {
        cin >> value;
        vs.pb(value);
        mymp[value]++;
    }
    sort(all(vs));
    ll max_dif = vs[n-1]-vs[0], ans = 0;
    if (vs[n-1] == vs[0]) ans = n*(n-1)/2;
    else ans = mymp[vs[n-1]]*mymp[vs[0]];

    cout << max_dif << ' ' << ans << '\n';

    return 0;
}