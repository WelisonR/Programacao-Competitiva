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

    ll n, ans;
    cin >> n;
    ans = (int) ceil(pow(n, 1.0/3.0));
    if (ans * ans * ans == n)
        cout << ans << '\n';
    else
        cout << -1 << '\n';

    return 0;
}