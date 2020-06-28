#include <bits/stdc++.h>
using namespace std;

// Complexidade: O(sqrt(N))
vector<int> factorize(int n) {
    vector<int> res;
    for(int i = 2; i*i <= n; i++) {
        while(n%i == 0) {
            res.push_back(i);
            n /= i;
        }
    }
    if(n != 1)
        res.push_back(n);
    
    return res;
}

// Seja N = (p1)^(q1) * (p2)^(q2) * ... * (pn)^(qn) em que qn
// é a potência do respectivo número primo. Logo:
// Número de divisores distintos = (q1+1) * (q2+1) * ... * (qn+1)
int main(){
    int num = 1053; // 1e9+7
    vector<int> factors = factorize(num);

    cout << "Fatores do número " << num << ": " << '\n';
    for(int& factor : factors) {
        cout << factor << ' ';
    }
    cout << '\n';
    
    return 0;
}