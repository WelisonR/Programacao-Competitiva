#include <bits/stdc++.h>
#define len(x) (int) (x.size())
using namespace std;
typedef long long ll;

ll power_recursive(ll x, ll n, ll M) {
    if (n == 0) {
        return 1;
    }
    else if (n % 2 == 0) {
        return (power_recursive(x, n/2, M) * power_recursive(x, n/2, M)) % M;
    }
    else {
        return (x%M * power_recursive(x, n-1, M)) % M;
    }
}

// Resolve (A/B)%M <=> (A*B⁻¹)%M
// M deve ser primo e A não deve ser múltiplo de M
ll modInverse(ll A, ll M) {
    return power_recursive(A, M-2, M);
}

int main(){
    cout << "Módulo recursivo através do Pequeno Teorema de Fermat" << '\n';
    cout << "Inverso Modular de 5 mod 11: " << modInverse(5, 11) << '\n';
    
    return 0;
}