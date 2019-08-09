#include <bits/stdc++.h>

using namespace std;

int main() {
    string a;
    cin >> a;

    int ans = 0;
    for(int i = 0; i < a.size(); i++)
        if (a[i] == 'H' or a[i] == 'Q' or a[i] == '9') ans = 1;

    cout << (ans == 1 ? "YES" : "NO") << '\n';

    return 0;
}