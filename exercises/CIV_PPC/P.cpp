#include <bits/stdc++.h>

using namespace std;
inline void FAST_IO(){ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define len(a) (int)(a).size()
#define ll long long
#define pb push_back
#define ff first
#define ss second

// "Aí você tá complicando a solução", Vandão, 2019

int main() {
    // FAST_IO();

    ll a, b, value;
    cin >> a >> b;

    vector<ll> vs;
    for(ll i = 0; i < a; i++) {
        cin >> value;
        vs.pb(value);
    }
    sort(vs.begin(), vs.end());

    if (len(vs) == 1) {
        ll dist = 0;
        if (vs[0] == b) dist = vs[0];
        else dist = max({vs[0]-0, b-vs[0]});
        printf("%.10lf\n", dist/1.0);
        return 0;
    }

    bool iniend = false;
    double gt_distance = 0;
    for(ll i = 1; i < len(vs); i++) {
        if (i == 1 && vs[i-1] != 0) {
            iniend = true;
            gt_distance = max({0.0, vs[0]/1.0, gt_distance}); // devem ser do mesmo tipo de dado
        }
        if (i == len(vs)-1 && vs[i] != b) {
            iniend = true;
            gt_distance = max({0.0, (b-vs[len(vs)-1])/1.0, gt_distance});
        }

        gt_distance = max({gt_distance, (vs[i]-vs[i-1])/2.0});
    }

    printf("%.10lf\n", gt_distance);

    return 0;
}
