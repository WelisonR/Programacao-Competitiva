#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;

    ll value;
    vector<ll> cities;
    for(int i = 0; i < n; i++) {
        cin >> value;
        cities.push_back(value);
    }

    vector<ll> ct_cp = cities;

    sort(cities.begin(), cities.end());

    if (cities[0] == cities[1])
        cout << "Still Rozdil" << "\n";
    else {
        auto ite = find(ct_cp.begin(), ct_cp.end(), cities[0]);
        int idx = distance(ct_cp.begin(), ite);

        cout << idx+1 << "\n";
    }

    return 0;
}