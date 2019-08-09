#include <bits/stdc++.h>

using namespace std;

int main() {
    int aa, ab, ac;
    cin >> aa >> ab >> ac;

    int e1, e2, e3;
    e1 = (int) sqrt(aa*ab/ac);
    e2 = (int) sqrt(ac*aa/ab);
    e3 = (int) sqrt(ac*ab/aa);

    cout << 4 * (e1+e2+e3) << '\n';

    return 0;
}