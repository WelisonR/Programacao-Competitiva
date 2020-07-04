# Problema

*   https://codeforces.com/contest/779/problem/C

# Solução

1. Código:

```cpp
#include <bits/stdc++.h>
#define len(x) (int) (x.size())
using namespace std;
typedef long long ll;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> cur(n), aft(n), sub(n);
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> cur[i];
        sum += cur[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> aft[i];
        sub[i] = aft[i]-cur[i];
    }
    sort(sub.begin(), sub.end());
    for(int i = 0; i < n-k; i++) {
        if(sub[i] < 0)
            sum += sub[i];
    }

    cout << sum << '\n';
    
    return 0;
}
```