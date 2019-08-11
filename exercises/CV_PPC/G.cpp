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

    ll n, m, count = 0;
    cin >> n >> m;
    for(ll i = 0; i <= 1000; i++)
        for(int j = 0; j <= 1000; j++)
            if (pow(i, 2) + j == n and i + pow(j, 2) == m)
                count++;
    cout << count << '\n';

    return 0;
}