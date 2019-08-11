#include <bits/stdc++.h>

using namespace std;
inline void FAST_IO(){ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define len(a) (int)(a).size()
#define ll long long

int main() {
    FAST_IO();
    int n;
    cin >> n;
    
    map<string, int> names; // initialize with int() = 0
    vector<string> vs;
    string s;
    for(int i = 0; i < n; i++) {
        cin >> s;
        names[s] = 1;
        vs.push_back(s);
    }

    for(auto i : vs) {
        if (names[i] == 1) {
            names[i] = -1;
            cout << "NO" << '\n';
        }
        else {
            cout << "YES" << '\n';
        }
    }

    return 0;
}

/*
- Iterar sobre um map:

- C++11:
for (auto const& x : symbolTable)
{
    std::cout << x.first  // string (key)
              << ':' 
              << x.second // string's value 
              << std::endl ;
}

-C++17:
for( auto const& [key, val] : symbolTable )
{
    std::cout << key         // string (key)
              << ':'  
              << val        // string's value
              << std::endl ;
}

*/