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

    int n, value, summ = 0;
    cin >> n;
    vector<int> vs;
    for(int i = 0; i < 12; i++) {
        cin >> value;
        summ += value;
        vs.pb(value);
    }
    if (summ < n) {
        cout << -1 << '\n';
        return 0;
    }
    sort(all(vs));
    int total = 0, j = 11, ans = 0;
    while (total < n) {
        total += vs[j];
        j--;
        ans++;
    }
    cout << ans << '\n';

    return 0;
}