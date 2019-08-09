#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ii = pair<int, int>;

const int MAX { 51 };

int main() {
    int n, t;
    string s;
    cin >> n >> t;
    cin >> s;
    replace(s.begin(), s.end(), 'G', '1');
    replace(s.begin(), s.end(), 'B', '0');

    bitset<MAX> q(s);

    while(t--) {
        for(int i = 0; i < n-1; i++) {
            if (q[i+1] == 0 and q[i] == 1) {
                q.flip(i+1);
                q.flip(i);
                i++;
            }
        }
    }

    for(int i = n-1; i >= 0; i--)
        cout << (q[i] == 1 ? 'G' : 'B');
    cout << '\n';

}