#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, value;
    cin >> n;

    vector<int> values;
    for(int i = 0; i < n; i++) {
        cin >> value;
        values.push_back(value); 
    }

    int ans = -1, min = -1;
    for(int i = 1; i < n; i++)
        if (i == 1 || abs(values[i]-values[i-1]) < min) {
            min = abs(values[i]-values[i-1]);
            ans = i;
        }

    if (abs(values[values.size()-1]-values[0]) < min) {
        cout << values.size() << " " << 1 << "\n";
        return 0;
    }
    
    cout << ans << " " << ans+1 << "\n";

    return 0;
}