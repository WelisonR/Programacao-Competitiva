#include <bits/stdc++.h>
#define len(x) (int) (x.size())
using namespace std;
typedef long long ll;

vector<bool> segmented_sieve(ll L, ll R) {
    vector<bool> isPrime(R-L+1, true);
    for(ll i = 2LL; i*i <= R; i++) {
        // Necessário começar no primeiro múltiplo de i do intervalo [L, R]
        for(ll j = max(i*i, (L+(i-1LL))/i * i); j <= R; j += i) {
            isPrime[j-L] = false;
        }
    }
    return isPrime;
}

vector<ll> find_primes(vector<bool> sieve, ll L, ll R) {
    vector<ll> primes;
    for(ll i = max(L, 2LL); i <= R; i++) {
        if(sieve[i-L]) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main(){
    ll L = 1LL, R = (ll)1e6;
    vector<bool> mySieve = segmented_sieve(L, R);
    vector<ll> primes = find_primes(mySieve, L, R);
    
    // cout << "Quantidade de primos no intervalo [" << L << "," << R << "]" << ": ";
    cout << (ll)primes.size() << '\n';

    return 0;
}