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

    int n;
    vector<char> letters {'a', 'e', 'i', 'o', 'u'};
    string s;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++) {
        getline(cin, s);
        int idx = 0;
        for(int j = 0; j < len(s); j++) {
            cout << s[j];
            if (s[j] != ' ') {
                cout << letters[idx];
                idx++;
            }
            if (idx == 5)
                idx = 0;
        }
        cout << '\n';
    }

    return 0;
}