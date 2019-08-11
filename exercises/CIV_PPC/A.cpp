/*
- Quantidade de a inferior: deve ter a-1 outros valores
*/

#include <bits/stdc++.h>

using namespace std;
inline void FAST_IO(){ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define len(a) (int)(a).size()
#define ll long long

int main() {
    FAST_IO();
    string s;
    cin >> s;

    int num_a = 0;
    for(int i = 0; i < len(s); i++)
        if (s[i] == 'a') num_a++;

    int ans = 0;
    if (num_a > len(s)/2) ans = len(s);
    else ans = 2*num_a-1;

    cout << ans << '\n';
    // cout << num_a + max(0, min(num_a - 1, len(s)-num_a)) << '\n';

    return 0;
}