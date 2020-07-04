# Problema

*   https://codeforces.com/problemset/problem/1266/B

# Solução

1. Observações:
   1. A soma dos lados opostos de um dado é sempre 7, isto é, `1+6 = 5+2 = 4+3`.
   2. Como haverá quatro faces laterais expostas, logo `soma = 14 * número de dados`.
   3. Além disso, tem-se a face que ficará no topo `soma = 14 * número de dados + topo`.
   4. Logo, `s = 14*n+t`.
   5. Portanto, computa-se `r = x % 14` e "r" será válido se `1 <= r <= 6` e `r > 14` (quanttidade mínima de um dado).

2. Código:

```cpp
#include <bits/stdc++.h>
#define len(x) (int) (x.size())
using namespace std;
typedef long long ll;

int main(){
    ll t, x;
    cin >> t;

    while(t--) {
        cin >> x;
        if(x > 14 && x%14 >= 1 && x%14 <= 6)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n'; 
    }
    
    return 0;
}
```
