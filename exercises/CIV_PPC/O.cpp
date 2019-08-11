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

    ll n;
    cin >> n;

    ll k, k2, j;
    k = (ll) ceil(1/2.0 * (sqrt(4*n+1) + 1)); // solução de k*(k-1) >= n
    j = k-1;

    if ((k-1)*(k-1) >= n)
        cout << (k-1)*2 << '\n';
    else
        cout << k+j << '\n';

    return 0;
}