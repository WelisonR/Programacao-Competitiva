#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, value;
    cin >> n;

    double total = 0.0;
    for(int i = 0; i < n; i++) {
        cin >> value;
        total += value;
    }
    total /= n;

    printf("%.12lf\n", total);

    return 0;
}