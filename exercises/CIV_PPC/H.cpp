#include <bits/stdc++.h>

using namespace std;
inline void FAST_IO(){ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define len(a) (int)(a).size()
#define ff first
#define ss second

int main() {
    FAST_IO();

    vector<pair<string, string>> vs;

    int n, m;
    cin >> n >> m;

    string s1, s2;
    for(int i = 0; i < m; i++) {
        cin >> s1 >> s2;

        vs.push_back({s1, s2});
    }


    vector<string> words;
    string s3, s4, s5;
    for(int i = 0; i < n; i++) {
        cin >> s3;
        
        for(int j = 0; j < len(vs); j++) {
            s4 = vs[j].ff;
            s5 = vs[j].ss;

            if (s3 == s4 || s3 == s5) {
                if (len(s4) == len(s5))
                    words.push_back(s4);
                else if (len(s4) < len(s5))
                    words.push_back(s4);
                else
                    words.push_back(s5);
            }
        }
    }

    for(int i = 0; i < len(words); i++) {
        cout << words[i] << (i == len(words)-1 ? '\n' : ' ');
    }

    return 0;
}