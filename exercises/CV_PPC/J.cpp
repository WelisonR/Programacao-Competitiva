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
    cin >> n;
    string s;
    cin >> s;
    vector<int> count(26);
    for(char c : s) {
        count[(int) (c-'a')]++;
    }

    string ans = "";
    for(int i = 0; i < len(count); i++) {
        if (count[i] % n != 0) {
            cout << -1 << '\n';
            return 0;
        }
        if (count[i] != 0 and count[i] % n == 0) {
            for (int j = 0; j < count[i]/n; j++) {
                ans += (char) (i+'a');
            }
        }
    }

    string resp = "";
    int div = len(s)/len(ans);
    while(div--) {
        resp += ans;
    }
    cout << resp << '\n';

    return 0;
}