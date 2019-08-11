// rever
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

    ll n, a, b, ans = 0;
    cin >> n >> a >> b;
    for(int i = 1; i <= min(a, b); i++) {
        if (a/i + b/i >= n) {
            ans = i;
        }
        else {
            break;
        }
    }
    cout << ans << '\n';

    return 0;
}