#include <bits/stdc++.h>
using namespace std;

const int MAX { 100010 };
int lps[MAX];
string str1, pattern;

/*
ababcabcabcabababd
ababd

I DO NOT LIKE SEVENTY SEV BUT SEVENTY SEVENTY SEVEN
SEVENTY SEVEN
*/

void kmp_preprocess() {
    int i = 0, j = -1; lps[0] = -1;
    while (i < (int) pattern.size()) {
        while (j >= 0 && pattern[i] != pattern[j]) j = lps[j];
        i++; j++;
        lps[i] = j;
    } 
}

vector<int> kmp_search() {
    vector<int> ans;
    int i = 0, j = 0;
    while (i < (int) str1.size()) {
        while (j >= 0 && str1[i] != pattern[j]) j = lps[j];
        i++; j++;
        if (j == (int) pattern.size()) {
            ans.push_back(i-j);
            j = lps[j];
        }
    }
    return ans;
}

int main() {
    getline(cin, str1);
    getline(cin, pattern);
    // cin >> str1 >> pattern;

    kmp_preprocess();
    vector<int> fp = kmp_search();

    cout << "Tabela de índices: " << '\n';
    for(unsigned int i = 0; i < pattern.size(); i++)
        cout << lps[i] << (i == pattern.size()-1 ? '\n' : ' ');
    
    cout << "Posições de matches: " << '\n';
    if (fp.size())
        for(unsigned int i = 0; i < fp.size(); i++)
            cout << fp[i] << (i == fp.size()-1 ? '\n' : ' ');
    else
        cout << -1 << '\n';

    return 0;
}
