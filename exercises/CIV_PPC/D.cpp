#include <bits/stdc++.h>

using namespace std;
inline void FAST_IO(){ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define len(a) (int)(a).size()
#define ll long long

int main() {
    FAST_IO();

    int n;
    cin >> n;

    string s;
    cin >> s;

    ll cont = 0;
    for(int i = 0; i < n; i++)
        if ((s[i] - '0') % 2 == 0)
            cont += min(i+1, len(s));

    cout << cont << '\n';

    return 0;
}