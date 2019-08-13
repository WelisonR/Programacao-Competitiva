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

const int MAX = 1e5;

int main() {
    FAST_IO();

    int n, value;
    cin >> n;
    map<int, int> mymp;
    for(int i = 0; i < n; i++) {
        cin >> value;
        mymp[value]++;
    }
    vector< int > vs[MAX];
    for(int i = 0; i < n/3; i++) {
        if (mymp[1] > 0 and mymp[2] > 0 and mymp[4] > 0) {
            vs[i].pb(1); vs[i].pb(2); vs[i].pb(4);
            mymp[1]--; mymp[2]--; mymp[4]--; 
        }
        else if (mymp[1] > 0 and mymp[2] > 0 and mymp[6] > 0) {
            vs[i].pb(1); vs[i].pb(2); vs[i].pb(6);
            mymp[1]--; mymp[2]--; mymp[6]--; 
        }
        else if (mymp[1] > 0 and mymp[3] > 0 and mymp[6] > 0) {
            vs[i].pb(1); vs[i].pb(3); vs[i].pb(6);
            mymp[1]--; mymp[3]--; mymp[6]--;
        }
        else {
            cout << -1 << '\n';
            return 0;
        }
    }
    for(int i = 0; i < n/3; i++) {
        cout << vs[i][0] << ' ' << vs[i][1] << ' ' << vs[i][2] << '\n';
    }

    return 0;
}