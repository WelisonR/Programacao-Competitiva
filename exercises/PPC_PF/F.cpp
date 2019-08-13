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

    ll n;
    cin >> n;
    // Edges of a complete graph: (n-1)+(n-2)+...+1 = n*(n-1)/2 = C(n, 2)
    // Complete graph with n-1 vertices and connect to last one
    ll ans = (n-1)*(n-2)/2;
    cout << ans+1 << '\n';

    return 0;
}