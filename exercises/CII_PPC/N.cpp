#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b, c;
    vector<char> ss(26), cs(26);

    cin >> a >> b >> c;

    for(int i = 0; i < a.size(); i++)
        ss[(int) a[i] - 65] += 1;

    for(int i = 0; i < b.size(); i++)
        ss[(int) b[i] - 65] += 1;

    for(int i = 0; i < c.size(); i++)
        cs[(int) c[i] - 65] += 1;
    
    for(int i = 0; i < 26; i++) {
        if (cs[i] != ss[i]) {
            cout << "NO" << '\n';
            return 0;
        }
    }

    cout << "YES" << '\n';

    return 0;
}