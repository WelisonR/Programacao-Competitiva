#include <bits/stdc++.h>

using namespace std;
inline void FAST_IO(){ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define len(a) (int)(a).size()
#define pb push_back
#define ff first
#define ss second

typedef long long ll;


int main() {
    // Interessante: nesse problema, o FAST_IO impede que as mensagens sejam
    // impressas enquanto se está digitando os inputs
    FAST_IO();

    int t, n;
    cin >> t;

    ll vl = 0, vr = 0;
    string s;
    list<char> alls;
    for(int i = 0; i < t; i++) {
        vl = vr = 0;
        cin >> n >> s;

        for(char c : s)
            alls.push_back(c);
        
        while (len(alls) > 0 and alls.front() == '<') {
            alls.pop_front();
            vl++;
        }

        while (len(alls) > 0 and alls.back() == '>') {
            alls.pop_back();
            vr++;
        }

        cout << min(vl, vr) << '\n';
        
        alls.clear();        
    }


    return 0;
}