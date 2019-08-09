#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drink = k*l/nl, slices = c*d, salt = p/np;

    int minimum = min({drink, slices, salt})/n;
    cout << minimum << '\n';

    return 0;
}