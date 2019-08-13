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

    int n, m, value;
    cin >> n >> m;
    vector<int> vs;
    for(int i = 0; i < m; i++) {
        cin >> value;
        vs.pb(value);
    }
    sort(all(vs));
    int min_value = 1e9;
    for(int i = 0; i <= m-n; i++) {
        min_value = min(min_value, vs[i+n-1]-vs[i]);
    }
    cout << min_value << '\n';

    return 0;
}