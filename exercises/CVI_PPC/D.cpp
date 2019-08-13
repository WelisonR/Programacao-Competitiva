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

    int n, m, value, minv, maxv;
    cin >> n >> m;
    priority_queue<ll, vector<ll>, greater<ll>> pqmin; // min heap
    priority_queue<ll> pqmax;
    for(int i = 0; i < m; i++) {
        cin >> value;
        pqmin.push(value);
        pqmax.push(value);
    }

    ll totalmin = 0, totalmax = 0;
    while(n--) {
        minv = pqmin.top(); pqmin.pop();
        maxv = pqmax.top(); pqmax.pop();
        totalmin += minv;
        totalmax += maxv;
        
        if (minv-1 > 0) {
            pqmin.push(minv-1);
        }
        if (maxv-1 > 0) {
            pqmax.push(maxv-1);
        }
    }
    cout << totalmax << ' ' << totalmin << '\n';

    return 0;
}