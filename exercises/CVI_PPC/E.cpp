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

    int n, m;
    cin >> n >> m;

    string line;
    for(int i = 0; i < n; i++) {
        cin >> line;
        for(int j = 0; j < len(line); j++) {
            if (line[j] == '.') {
                if ((i+j) % 2 == 0) cout << 'W';
                else cout << 'B';
            }
            else {
                cout << line[j];
            }
        }
        cout << '\n';
    }

    return 0;
}