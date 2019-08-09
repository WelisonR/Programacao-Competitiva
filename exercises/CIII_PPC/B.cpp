#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    transform(a.begin(), a.end(), a.begin(), [](unsigned char c) { return tolower(c); });
    transform(b.begin(), b.end(), b.begin(), [](unsigned char c) { return tolower(c); });

    int compare = a.compare(b);

    cout << (compare == 0 ? "0" : (compare < 0 ? "-1" : "1") ) << '\n';

    return 0;
}