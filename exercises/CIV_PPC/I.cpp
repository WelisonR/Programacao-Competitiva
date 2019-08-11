#include <bits/stdc++.h>

using namespace std;
inline void FAST_IO(){ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define len(a) (int)(a).size()
#define ll long long
#define pb push_back

string tt_string(string s) {
    for (char &i : s) {
        if (i >= 'a' and i <= 'z')
            i = toupper(i);
        else
            i = tolower(i);
    }

    return s;
}

int main() {
    FAST_IO();

    string s;
    cin >> s;

    bool all_caps = true;
    for(int i = 1; i < len(s); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            all_caps = false;
            break;
        }
    }

    if (all_caps)
        cout << tt_string(s) << '\n';
    else
        cout << s << '\n';

    return 0;
}