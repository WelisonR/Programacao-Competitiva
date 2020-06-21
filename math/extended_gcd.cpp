#include <bits/stdc++.h>
using namespace std;

int ans, x, y;
void extendedEuclid(int A, int B) {
    if(B == 0) {
        ans = A;
        x = 1;
        y = 0;
    }
    else {
        extendedEuclid(B, A%B);
        int temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
}

// x e y serão os inversos modulares em ax+by = gcd(a,b)
// somente se o gcd(a, b) == 1.
int main(){
    extendedEuclid(16, 10);
    cout << "GCD(16, 10) = " << ans << '\n';
    cout << "Coeficientes (x e y): " << x << ' ' << y << '\n';
    
    return 0;
}