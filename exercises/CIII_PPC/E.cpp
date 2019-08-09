#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main() {
    ll n, value;
    cin >> n;

    map<ll, ll> mp;
    for(ll i = 0; i < n; i++) {
        cin >> value;
        mp[value] = i;
    }

    ll q, v1 = 0, p1 = 0;
    cin >> q;
    for(ll i = 0; i < q; i++) {
        cin >> value;

        v1 += mp[value]+1;
        p1 += mp.size()-mp[value];
    }

    cout << v1 << " " << p1 << "\n";

    return 0;
}

// SOME HARD CODE
/*
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, value;
    cin >> n;

    vector<int> vs;
    for(int i = 0; i < n; i++) {
        cin >> value;
        vs.push_back(value);
    }

    int q, v1 = 0, p1 = 0;
    cin >> q;
    
    for(int i = 0; i < q; i++) {
        cin >> value;

        auto vv1 = find(vs.begin(), vs.end(), value);
        int d1 = distance(vs.begin(), vv1)+1;
        v1 += d1;

        auto vv2 = find(vs.rbegin(), vs.rend(), value); // if not found, returns 1 back to begin
        int d2 = distance(vs.rbegin(), vv2)+1;
        p1 += d2;
    }

    cout << v1 << " " << p1 << "\n";

    return 0;
}
*/