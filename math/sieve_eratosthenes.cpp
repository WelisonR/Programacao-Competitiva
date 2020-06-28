#include <bits/stdc++.h>
using namespace std;

// Computa os primos menores ou iguais a n
// Complexidade: O(NloglogN)
vector<int> sieve(int n) {
    // sieve_v[i] = 0 denota que o i-ésimo número é primo
    vector<int> sieve_v(n+1, 0);
    sieve_v[0] = -1; sieve_v[1] = 1;

    for(int i = 2; i*i <= n; i++) {
        if (sieve_v[i]) continue;

        for(int j = i*i; j <= n; j += i)
            sieve_v[j] = i; // i é um fator de j
    }

    return sieve_v;
}

int main(){
    int num = 933217;
    vector<int> primes = sieve(933217);
    
    cout << "O número " << num << (primes[num] == 0 ? " é primo!" : "não é primo!") << '\n';
    cout << primes[102] << '\n';

    return 0;
}