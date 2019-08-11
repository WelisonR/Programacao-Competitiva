#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
inline void FAST_IO(){ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}

#define len(a) (int)(a).size()
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(), x.end()

int main() {
    FAST_IO();

    ll n, m, aux, dif;
    cin >> n >> m;
    vector<ll> acc;
    acc.pb(0LL);
    for(ll i = 1; i < n+1; i++) {
        cin >> aux;
        acc.pb(acc[i-1]+aux);
    }
    for(ll i = 0, j = 1; i < m; i++) {
        cin >> aux;
        while (j != len(acc)-1 && !(aux > acc[j-1] && aux <= acc[j])) {
            j++;
        }
        dif = aux-acc[j-1];
        cout << j << ' ' << dif << '\n';
    }

    return 0;
}