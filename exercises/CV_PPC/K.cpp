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

    ll n, a, b, cont = 0;
    cin >> n >> a >> b;
    for(int i = 1; i <= n; i++) {
        if (a <= i-1 and n-i <= b) cont++;
    }
    cout << cont << '\n';

    return 0;
}