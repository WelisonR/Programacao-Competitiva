#include <bits/stdc++.h>

using namespace std;
inline void FAST_IO(){ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define len(a) (int)(a).size()
#define ll long long
#define pb push_back

int main() {
    FAST_IO();

    int n, m;
    cin >> n >> m;

    int time = 240-m;

    int i = 1, cont = 0;
    while (time-5*i >= 0) {
        time -= 5*i;
        cont++; i++;
        if (cont == n) break;
    }

    cout << cont << '\n';

    return 0;
}