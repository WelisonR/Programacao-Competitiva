#include <bits/stdc++.h>
#define len(x) (int) (x.size())
using namespace std;
typedef long long ll;

/*
φ(N) = n * produtório (1 - 1/p) de todos os fatores p de n (p|n).
φ(N): retorna a quantidade de coprimos com N até N (inclusive);
    Ex.: φ(12) = 4 = {2, 3, 5, 7} 
Propriedades:
1. Caso p seja primo, gcd(p, q) = 1 para 1 <= q < p. Logo: φ(p) = p-1
2. Caso p seja primo e k >= 1, há exatamente (p^k)/p números entre 1 e p^k
    que são divisíveis por p. Logo: φ(p^k) = p^k-p^(k-1)
3. Se a e b são coprimos, φ(ab) = φ(a) * φ(b).
    Demonstrado pelo Teorema Chinês do Resto.
4. Para a e b não coprimos: φ(ab) = φ(a)*φ(b)*d/(φ(d))
    Dado que d = gcd(a, b).

Passo a passo:
1. result = n;
2. Para todo 'p' no intervalo [2, √n]:
    If 'p' divide n:
    a. Subtrair todos os múltiplos de 'p' de 1 até n (gcd(n, x) > 1)
    b. Atualizar n dividindo repetidamente por 'p'.
3. Se n > 1, remover todos os múltiplos de n do resultado.

Outras propriedades:
1. Somatório de φ(d) = n, em que d são os divisores de n.
2. Seja n e a coprimos: a^(φ(n)) ≡ 1 (mod n)
*/
int totient_function(int n) {
    int result = n;
    for(int p = 2; p*p <= n; p++) {
        if(n%p == 0) {
            while(n%p == 0)
                n /= p;
            result -= result/p;
        }
    }
    if(n > 1)
        result -= result/n;
    
    return result;
}

int main(){
    int N = 20;
    cout << "Quantidade de coprimos de 1 até " << N << ":" << '\n';
    for(int i = 0; i <= N; i++) {
        cout << "φ(" << i << ") = " << totient_function(i) << '\n';
    } 
    
    return 0;
}