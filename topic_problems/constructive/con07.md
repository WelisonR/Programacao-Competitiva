# Problema

*   https://codeforces.com/contest/1099/problem/C

# Solução

1. Solução:

```cpp
#include <bits/stdc++.h>
#define len(x) (int) (x.size())
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> vs(n);
        for(int& a : vs)
            cin >> a;
        ll segments = 0;
        bool validSegment = false;
        for(int i = 0;  i < n; i++) {
            if(i+1 == vs[i]) {
                if(validSegment) {
                    segments++;
                    validSegment = false;
                }
            }
            if(i+1 != vs[i])
                validSegment = true;
        }
        if(validSegment)
            segments++;

        if(is_sorted(vs.begin(), vs.end()))
            cout << 0 << '\n';
        else if(segments == 1)
            cout << 1 << '\n';
        else
            cout << 2 << '\n';
    }
    
    return 0;
}
```