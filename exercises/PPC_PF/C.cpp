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
    double D, value, maxv = -1.0, minv = 11.0, total = 0, mid;
    cin >> D;
    for(int i = 0; i < 7; i++) {
        cin >> value;
        maxv = max(maxv, value);
        minv = min(minv, value);
        total += value;
    }
    total += -maxv-minv;
    mid = total/5.0;
    printf("%.1lf\n", D*mid);

    return 0;
}