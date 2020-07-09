# Problema

*   https://codeforces.com/contest/680/problem/B

# Solução

1. Algoritmo:
   1. Seja o vetor `5 -2 4 8 6 5`, inicialmente, deve-se ordenar: `-2 4 5 5 6 8`.
   2. Seja $|a1 - a2| ≤ |a2 - a3| ≤ |a3 - a4|$... uma sequência de ordem crescente, observa-se que os menores elementos serão aqueles que possuem a menor distância.
   3. Portanto, o algoritmo parte do centro do vetor de forma a pegar pares, com exceção quando o tamanho do vetor é ímpar e há um elemento central.
      1. `5 e 5`; `4 e 6`; `-2 e 8`.
   4. Uma maneira fácil de obter elementos equidistantes é utilizar a fórmula: `i e n-i-1`.


2. Código:

```cpp
#include <bits/stdc++.h>
#define len(x) (int) (x.size())
using namespace std;
typedef long long ll;

int main(){
    int t, n;
    cin >> t;

    while(t--) {
        cin >> n;
        vector<int> elem(n), ans;
        for(auto& val : elem)
            cin >> val;
        sort(elem.begin(), elem.end());
        for(int i = (n-1)/2; i >= 0; i--) {
            if(i == (n-1)/2 && n%2 == 1) {
                ans.push_back(elem[i]);
            }
            else {
                ans.push_back(elem[i]);
                ans.push_back(elem[n-i-1]);
            }
        }
        for(auto& val : ans)
            cout << val << ' ';
        cout << '\n';
    }
    
    return 0;
}
```