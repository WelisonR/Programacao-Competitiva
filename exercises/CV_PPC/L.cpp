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

    string s;
    cin >> s;

    ll cont = 1;
    for(int i = 1; i < len(s); i++) {
        if (s[i] == s[i-1]) cont++;
        else cont = 1;
        
        if (cont == 7) {
            cout << "YES" << '\n';
            return 0;
        }
    }
    cout << "NO" << '\n';

    return 0;
}