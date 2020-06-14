#include <bits/stdc++.h>
using namespace std;

// Operação de módulo pode ser implementada como abaixo
int mod(int a, int b) {
    return a - a/b *b;
}

// Caso b = 0, indica que se encontrou o gcd(a, b).
// Visto que a%b < b devido ao módulo, realiza-se a chamada gcd(b, a%b)
int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}

// TODO: Desenvolver o algoritmo estendido de Euclides

int main(){
    cout << "Maior divisor comum: " << gcd(16, 10) << '\n';
    cout << "Maior divisor comum (builtin gcd): " << __gcd(16, 10) << '\n';
    
    return 0;
}