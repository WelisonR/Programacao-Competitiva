#include <bits/stdc++.h>

using namespace std;
using ii = pair<int, int>;

int main() {
    // vector<int, vector<int>> mat;

    // int value = 0;
    ii a;
    
    int in;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> in;

            if (in == 1)
                a = ii({i+1, j+1});
        }
    }

    cout << abs(a.first-3)+abs(a.second-3) << '\n';

    return 0;
}