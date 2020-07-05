# Problema

Disponível em:
*   https://codeforces.com/problemset/problem/932/A

# Solução

1. Algoritmo:
   1. Suponha a string `abcd`. Como fazer um palíndromo em que abcd é uma subsequẽncia?
   2. Para ser possível formar um palíndromo, percebe-se que o `d` deve vir para o início da string, logo, `dabcd`.
   3. Entretanto, nota-se que o `a` deve vir antes do `d` no final da string, logo, `dabcad`.
   4. Portanto, as bordas (`daad`) formam um palíndromo.
   5. Processo continua iterativamente.

2. Código:

```cpp
#include <bits/stdc++.h>
#define len(x) (int) (x.size())
using namespace std;
typedef long long ll;
 
int main(){
    string s;
    cin >> s;
 
    string ans = "";
    for(int i = 0; i < len(s); i++) {
        ans += s[len(s)-1-i];
        ans += s[i];
    }
    cout << ans << '\n';
    
    return 0;
}
```