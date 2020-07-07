# Problema

*   https://codeforces.com/contest/680/problem/B

# Solução

1. Código:

```cpp
#include <bits/stdc++.h>
#define len(x) (int) (x.size())
using namespace std;
typedef long long ll;

int main(){
    int n, a;
    cin >> n >> a;
    vector<int> criminals(n);
    for(auto& criminal : criminals)
        cin >> criminal;
    
    int ans = 0, step = 0, left, right;
    for(int i = a-1; (i >= 0) || (i+step < n); i--) {
        left = 0, right = 0;
        if(i >= 0 && i+step < n) {
            left = criminals[i];
            right = criminals[i+step];
            if(left & right & (step != 0))
                ans++;
        }
        else if(i < 0) {
            left = 1;
            right = criminals[i+step];
        }
        else if(i+step >= n) {
            left = criminals[i];
            right = 1;
        }

        ans += (left & right);
        step += 2;
    }

    cout << ans << '\n';

    return 0;
}
```