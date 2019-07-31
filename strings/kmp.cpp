#include <bits/stdc++.h>

using namespace std;

const int MAX { 100010 };
int patt_array[MAX];

/*
ababcabcabcabababd
ababd
*/

void build_table(string pattern) {
    int idx = 0;

    patt_array[0] = 0;
    for(int i = 1; i < (int) pattern.size(); i++) {
        if (pattern[i] == pattern[idx]) {
            patt_array[i] = ++idx;
        }
        else {
            patt_array[i] = 0;
            idx = 0;
        }
    }
}

vector<int> find_pattern(string str1, string pattern) {
    int i = 0, j = 0;
    vector<int> pos;
    while (i < str1.size()) {
        if (pattern[j] == str1[i]) {
            j++;
            i++;
        }

        if (j == pattern.size()) {
            pos.push_back(i-j);
            j = patt_array[j - 1]; 
        }
        else if (i < str1.size() && pattern[j] != str1[i]) { 
            if (j != 0) 
                j = patt_array[j - 1];
            else
                i = i + 1; 
        }
    }
    return pos;
}


int main() {
    string str1, pattern;
    cin >> str1 >> pattern;

    build_table(pattern);
    vector<int> fp = find_pattern(str1, pattern);

    cout << "Tabela de índices: " << '\n';
    for(int i = 0; i < pattern.size(); i++)
        cout << patt_array[i] << (i == pattern.size()-1 ? '\n' : ' ');
    
    cout << "Posições de matches: " << '\n';
    if (fp.size())
        for(int i = 0; i < fp.size(); i++)
            cout << fp[i] << (i == fp.size()-1 ? '\n' : ' ');
    else
        cout << -1 << '\n';

    return 0;
}
