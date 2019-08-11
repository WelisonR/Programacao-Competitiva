#include <bits/stdc++.h>

using namespace std;
inline void FAST_IO(){ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define len(a) (int)(a).size()
#define ll long long

int main() {
    FAST_IO();

    int n;
    cin >> n;

    string s;
    cin >> s;

    int d = 0;
    for(char c : s)
        if (c == 'D')
            d++;
    
    int a = len(s)-d;

    if (d == a)
        cout << "Friendship" << '\n';
    else if (d > a)
        cout << "Danik" << '\n';
    else
        cout << "Anton" << '\n';

    return 0;
}