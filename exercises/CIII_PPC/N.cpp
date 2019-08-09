#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// const double PHI = { (1+sqrt(5))/2.0 };
// ll getFib(int n) {
//     return (int) ((pow(PHI, n)-(pow(-PHI, -n)))/sqrt(5));
// }

vector<ll> genFib(int n) {
    vector<ll> vs {0, 1, 1};

    for(int i = 3; i < n; i++)
        vs.push_back(vs[vs.size()-1] + vs[vs.size()-2]);
    
    return vs;
}

int findIndex(vector<ll> vs, ll fibv) {
    for (int i = 0; i < vs.size(); i++)
        if (vs[i] == fibv)
            return i;
    
    return -1;
}

int main() {
    vector<ll> vs = genFib(45);

    ll n;
    cin >> n;

    if (n == 0)
        cout << '0' << ' ' << '0' << ' ' << '0' << '\n';
    else if (n == 1)
        cout << '1' << ' ' << '0' << ' ' << '0' << '\n';
    else if (n == 2)
        cout << '1' << ' ' << '1' << ' ' << '0' << '\n';
    else {
        int idx = findIndex(vs, n);
        cout << vs[idx-1] << ' ' << vs[idx-3] << ' ' << vs[idx-4] << '\n';
    }

    return 0;
}