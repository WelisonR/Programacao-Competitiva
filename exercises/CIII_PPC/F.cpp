#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> vs {1, 2, 3, 4, 5};
    int n;
    cin >> n;

    int value, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> value;
        sum += value;
    }

    int count = 0;
    for(int i = 0; i < 5; i++) {
        if ((sum + vs[i]) % (n+1) != 1) count++;
    }

    cout << count << '\n';

    return 0;
}