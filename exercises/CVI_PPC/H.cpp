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

    string s;
    cin >> s;
    vector<int> vs(26);
    for(int i = 0; i < len(s); i++)
        vs[s[i]-'a']++;
    int odd = 0;
    for(int i = 0; i < 26; i++)
        if (vs[i] % 2)
            odd++;
    if ((odd == 0) or (odd % 2))
        cout << "First" << '\n';
    else
        cout << "Second" << '\n';

    return 0;
}