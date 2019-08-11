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
    cin >> n;
    vector<int> vsa, vsb;
    for(int i = 0; i < n; i++) {
        cin >> value;
        vsa.pb(value);
    }
    cin >> m;
    for(int i = 0; i < m; i++) {
        cin >> value;
        vsb.pb(value);
    }

    vector<int> ans;
    for(int i = 0; i< len(vsa); i++) {
        for(int j = 0; j < len(vsb); j++) {
            if (vsb[j] % vsa[i] == 0) {
                ans.pb(vsb[j]/vsa[i]);
            }
        }
    }
    sort(all(ans));

    int cont = 1;
    for(int i = len(ans)-1; i > 0; i--) {
        if (ans[i-1] == ans[i]) cont++;
        else break;
    }

    cout << (len(ans) == 0 ? '0' : cont) << '\n';

    return 0;
}