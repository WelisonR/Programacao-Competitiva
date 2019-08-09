#include <bits/stdc++.h>

using namespace std;

vector<int> sieve(int n) {
    vector<int> sieve_v(n+1, 0);
    sieve_v[0] = -1; sieve_v[1] = 1; // safe

    for(int i = 2; i*i <= n; i++) {
        if (sieve_v[i]) continue;

        for(int j = i*i; j <= n; j += i)
            sieve_v[j] = i; // i is a factor of j
    }

    return sieve_v;
}

int search_minor(vector<int> ce, int b) {
    for (int i = b-1; i >= 2; i--)
        if (ce[i] == 0)
            return i;
    
    return -1;
}

int main() {
    vector<int> ce = sieve(10000);

    int a, b;
    cin >> a >> b;

    if (!ce[b]) {
        int lo = search_minor(ce, b);
        if (lo == a) {
            cout << "YES" << '\n';
            return 0;
        }
    }
    
    cout << "NO" << '\n';
    
    return 0;
}