#include <bits/stdc++.h>
#define len(x) (int) (x.size())

using namespace std;
// Length of longest common substring ending at ith and jth position
// geeksforgeeks
//     ^       ^   L[5][13] = 5
// L[i][j] = L[i-1][j-1]+1, last nº matches + 1
int LCS[5002][5002];
int res_length = 0;

// Problema: encontre o sufixo de repetição mais longo
// para todos os prefixos na string str.
// Sem overlap: aabaabaaba
//              1234567890
//                 ^  ^
// 7-4 = 3 (letras a esquerda de mys[3])
// LCS[3][6] = 3
// Isto é, iminência de overlap
void long_nrsubst(string mys) {
    memset(LCS, 0, sizeof(LCS));
    for(int i = 1; i <= len(mys); i++) {
        for(int j = i+1; j <= len(mys); j++) {
            if (mys[i-1] == mys[j-1] && LCS[i-1][j-1] < (j-i)) {
                LCS[i][j] = LCS[i-1][j-1]+1;
                res_length = max(LCS[i][j], res_length);
                // Se quiser a string: index = max(i, index);
            }
            else
                LCS[i][j] = 0;
        }
    }
}

int main() {
    int n;
    string s;
    cin >> n >> s;
    
    long_nrsubst(s);
    cout << res_length << '\n';

    return 0;
}