#include <bits/stdc++.h>

using namespace std;

int main() {
    set<int> ss;

    int value = 0;
    for(int i = 0; i < 4; i++) {
        cin >> value;
        ss.insert(value);
    }

    cout << 4-ss.size() << '\n';

    return 0;
}