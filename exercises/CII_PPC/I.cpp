#include <bits/stdc++.h>

using namespace std;
// Remember: min_element(iter start, iter end, comp). Same to max_element. Returns iterator.
// max, min with multiple values: put {} - max({a, b, c})

int main() {
    int n;
    cin >> n;
    
    int a, b, al, sum = 0, min = 0;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        sum += -a+b;

        min = max(min, sum);
    }

    cout << min << '\n';

    return 0;
}