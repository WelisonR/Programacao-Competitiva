#include <bits/stdc++.h>

using namespace std;
inline void FAST_IO(){ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define len(a) (int)(a).size()
#define ll long long
#define pb push_back

int main() {
    FAST_IO();

    string s;
    cin >> s;
    int c, d = 1, subans = 0, cont = 0;
    for(char c : s) {
        c = c - 'a' + 1;
        subans = min(abs(c-d), 26-abs(c-d));
        cont += subans;
        d = c;
    }

    cout << cont << '\n';

    return 0;
}

    