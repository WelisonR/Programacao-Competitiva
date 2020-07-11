# Problema

*   https://codeforces.com/contest/1099/problem/C

# Solução

1. Algoritmo:
   1. Operações no caracter à esquerda:
      1. `'*'`: remove, deixa ou repete n vezes.
      2. `'?'`: remove ou deixa.
   2.  Seja `n` a quantidade de caracteres válidos na string e `k` a quantidade de caracteres desejados na resposta, são casos inválidos:
       1.  Se `n < k` e `não há '*'`, pois não será possível adicionar elementos e chegar a quantidade `k`.
       2.  Se `n-'?'-'*' > k`, pois não será possível remover elementos e chegar a quantidade `k`.
   3.  Algoritmo guloso:
       1.  Repete os caracteres.
       2.  Se `n < k`, se chegar ao primeiro `*` repetir `k-n-1` vezes, se `'?'` deixa.
       3.  Se `n > k`, remove.

2. Código:

```cpp
#include <bits/stdc++.h>
#define len(x) (int) (x.size())
using namespace std;
typedef long long ll;
 
int main(){
    string s;
    int k;
    cin >> s >> k;
    int n = 0, aster = 0, quest = 0;
    for(char c : s) {
        if(c == '?') quest++;
        else if(c == '*') aster++;
        else n++;
    }
    if((n < k && aster == 0) || (n-aster-quest > k)) {
        cout << "Impossible" << '\n';
        return 0;
    }
    string ans = "";
    int first = 0;
    for(int i = 0; i < len(s); i++) {
        if(s[i] != '*' && s[i] != '?')
            ans += s[i];
        if(n < k && s[i] == '*' && first == 0) {
            for(int j = 0; j < k-n; j++) {
                ans += s[i-1];
            }
            first = 1;
        }
        if(n > k && (s[i] == '*' || s[i] == '?')) {
            ans.pop_back();
            n--;
        }
    }
    cout << ans << '\n';
    
    return 0;
}
```