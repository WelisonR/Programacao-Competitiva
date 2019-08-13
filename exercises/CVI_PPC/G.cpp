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

    ll n, a;
    cin >> n;
    vector<pair<ll, ll>> ans, vs; // valor e posição/repetição
    for(ll i = 0; i < n; i++) {
        cin >> a;
        vs.pb({a, i});
    }
    sort(all(vs));
    ll dif = 0;
    bool first_occurance = true, valid=true;
    for(ll i = 1; i < n; i++) {
        if (vs[i-1].ff == vs[i].ff) {
            if (first_occurance) {
                dif = vs[i].ss-vs[i-1].ss;
                first_occurance = false;
            }
            else {
                if (vs[i].ss-vs[i-1].ss != dif) {
                    valid = false;
                }
            }
        }
        else if (vs[i-1].ff != vs[i].ff and valid == true) {
            ans.pb({vs[i-1].ff, dif});
            first_occurance = true;
            dif = 0;
            valid = true;
        }
        else if (vs[i-1].ff != vs[i].ff) {
            valid = true;
            dif = 0;
            first_occurance = true;
        }
    }
    if (valid) {
        ans.pb({vs[len(vs)-1].ff, dif});
    }

    cout << len(ans) << '\n';
    for(ll i = 0; i < len(ans); i++)
        cout << ans[i].ff << ' ' << ans[i].ss << '\n';

    return 0;
}