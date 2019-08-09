#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, v1, v2;
    cin >> n;

    vector<pair<int, int>> vs;
    for(int i = 0; i < n; i++) {
        cin >> v1 >> v2;

        vs.push_back({v1, v2});
    }

    int ans = 0;
    for (int i = 0; i < vs.size(); i++) {
        int l = 0, r = 0, u = 0, d = 0;
        for(int j = 0; j < vs.size(); j++) {
            if (vs[j].first < vs[i].first and vs[j].second == vs[i].second)
                u = 1;
            if (vs[j].first == vs[i].first and vs[j].second > vs[i].second)
                r = 1;
            if (vs[j].first > vs[i].first and vs[j].second == vs[i].second)
                d = 1;
            if (vs[j].first == vs[i].first and vs[j].second < vs[i].second)
                l = 1;
            
            if (u and r and d and l) { ans++; break;}
        }
    }

    cout << ans << '\n';

    return 0;
}