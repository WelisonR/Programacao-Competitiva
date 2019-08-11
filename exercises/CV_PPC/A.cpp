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

    ll n, m, a = 1, b, cont = 0;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        cin >> b;
        if (a < b) {
            cont += b-a;
        }
        if (a > b) {
            cont += n-a+b;
        }
        a = b;
    }
    cout << cont << '\n';

    return 0;
}