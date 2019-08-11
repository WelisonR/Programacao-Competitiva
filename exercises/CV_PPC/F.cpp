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

    priority_queue<ll, vector<ll>, greater<ll>> pq; // min heap
    ll n, m, value, total = 0, control = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> value;
        pq.push(value);
    }
    while (!pq.empty() && pq.top() < 0 && control != m) {
        total += abs(pq.top()); pq.pop();
        control++;
    }

    cout << total << '\n';

    return 0;
}