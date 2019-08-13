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

    int s, n, xi, yi, ans = 1;
    cin >> s >> n;
    vector<pair<int, int>> vs;
    for (int i = 0; i < n; i++) {
        cin >> xi >> yi;
        vs.pb({xi, yi});
    }
    sort(all(vs));
    for(auto c : vs) {
        if (s > c.ff) {
            s += c.ss;
        }
        else {
            ans = 0;
            break;
        }
    }

    cout << (ans ? "YES" : "NO") << '\n';

    return 0;
}