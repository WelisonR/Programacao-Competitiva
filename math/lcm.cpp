#include <bits/stdc++.h>
using namespace std;

// a*b = gcd(a,b)*lcm(a,b)
int lcm(int a, int b) {
    return a*b/__gcd(a, b);
}

int main(){
    cout << "Menor múltiplo comum: " << lcm(3, 8) << '\n';
    
    return 0;
}