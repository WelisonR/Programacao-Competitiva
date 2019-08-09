#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    string a;
    for (int i = 0; i < n; i++) {
        cin >> a;

        if (a == "X++" || a == "++X") count++;
        else count--;
    }

    cout << count << '\n';

    return 0;
}