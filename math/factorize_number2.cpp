#include <bits/stdc++.h>
using namespace std;

// Complexidade: O(NloglogN)
vector<int> minPrime(int n) {
    vector<int> firstDivisor(n+1, 0);
    for(int i = 2; i*i <= n; i++) {
        if(!firstDivisor[i]) {
            for(int j = i*i; j <= n; j += i) {
                if(!firstDivisor[j]) {
                    firstDivisor[j] = i;
                }
            }
        }
    }
    for(int i = 2; i <= n; i++) {
        if(!firstDivisor[i]) {
            firstDivisor[i] = i;
        }
    }

    return firstDivisor;
}

// Complexidade: O(log(N))
vector<int> factorize(vector<int>& firstDivisor, int n) {
    vector<int> ans;
    while(n != 1) {
        ans.push_back(firstDivisor[n]);
        n /= firstDivisor[n];
    }
    return ans;
}

int main(){
    const int MAX { 200000 }, num { 1053 };
    vector<int> firstDivisor = minPrime(MAX);
    vector<int> factors = factorize(firstDivisor, num);

    cout << "Fatores do número " << num << ": " << '\n';
    for(int& factor : factors) {
        cout << factor << ' ';
    }
    cout << '\n';

    return 0;
}