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
    map<pair<string, string>, int> mymp;
    mymp[{"tesoura", "papel"}] = 1;
    mymp[{"papel", "pedra"}] = 1;
    mymp[{"pedra", "lagarto"}] = 1;
    mymp[{"lagarto", "Spock"}] = 1;
    mymp[{"Spock", "tesoura"}] = 1;
    mymp[{"tesoura", "lagarto"}] = 1;
    mymp[{"lagarto", "papel"}] = 1;
    mymp[{"papel", "Spock"}] = 1;
    mymp[{"Spock", "pedra"}] = 1;
    mymp[{"pedra", "tesoura"}] = 1;

    string a, b;
    cin >> a >> b;
    if (a == b)
        cout << "De novo!" << '\n';
    else if (mymp[{a, b}])
        cout << "Bazinga!" << '\n';
    else
        cout << "Raj trapaceou!" << '\n';

    return 0;
}