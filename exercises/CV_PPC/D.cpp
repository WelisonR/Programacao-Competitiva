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

    int n;
    cin >> n;
    string s;
    map<string, ll> mp;
    for(int i = 0; i < n; i++) {
        cin >> s;
        mp[s]++;
    }

    string ans;
    ll score = 0, prev = 0;
    for(auto const& [key, val] : mp) {
        score = max(score, val);
        if (score != prev) ans = key;
        prev = score;
    }
    cout << ans << '\n';

    return 0;
}