#include <bits/stdc++.h>
using namespace std;

// Naive algorithm: worst case - O(2^n).
// Can use memoization to improve algorithm: worst case - O(mn)

// int lcs(string x, string y, int m, int n) {
//     if (m == 0 || n == 0)
//         return 0;
    
//     if (x[m-1] == y[n-1])
//         return 1 + lcs(x, y, m-1, n-1);
//     else
//         return max(lcs(x, y, m, n-1), lcs(x, y, m-1, n));
// }

const int MAX { 1010 };
int L[MAX][MAX];
int lcs(string x, string y, int m, int n) {
    for(int i = 0; i <= m; i++) {
        for(int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (x[i-1] == y[j-1])
                L[i][j] = 1+L[i-1][j-1];
            else
                L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
    }

    return L[m][n];
}

int main() {
    string x = "AGGTAB";
    string y = "GXTXAYB";

    int m = x.length();
    int n = y.length();

    cout << "Length of LCS: " << lcs(x, y, m, n) << '\n';

    return 0;
}