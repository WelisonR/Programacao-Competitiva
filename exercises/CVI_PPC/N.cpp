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

    int n, value, n100 = 0, n200 = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> value;
        if (value == 100) {
            n100++;
        }
        else {
            n200++;
        }
    }
    for(int i = 0; i <= n200; i++) {
        for(int j = 0; j <= n100; j++) {
            if (200*i+100*j == 200*(n200-i)+100*(n100-j)) {
                cout << "YES" << '\n';
                return 0;
            }
        }
    }
    
    cout << "NO" << '\n';
    return 0;
}