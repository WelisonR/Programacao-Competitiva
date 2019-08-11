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

    string s;
    bool ans = false;
    cin >> s;
    for(int i = 0; i < len(s);) {
        if (i+2 < len(s) and s[i] == '1' and s[i+1] == '4' and s[i+2] == '4') {
            ans = true;
            i += 3;
        }
        else if (i+1 < len(s) and s[i] == '1' and s[i+1] == '4') {
            ans = true;
            i += 2;
        }
        else if (s[i] == '1') {
            ans = true;
            i++;
        }
        else {
            ans = false;
            break;
        }
    }

    cout << (ans == false ? "NO" : "YES") << '\n';

    return 0;
}