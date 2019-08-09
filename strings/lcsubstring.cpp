#include <bits/stdc++.h>
using namespace std; 
  

int LCSubStr(char *X, char *Y, int m, int n) 
{ 
    int L[m+1][n+1]; 
    int result = 0;

    for (int i=0; i<=m; i++) 
    { 
        for (int j=0; j<=n; j++) 
        { 
            if (i == 0 || j == 0) 
                L[i][j] = 0; 
  
            else if (X[i-1] == Y[j-1]) 
            { 
                L[i][j] = L[i-1][j-1] + 1; 
                result = max(result, L[i][j]); 
            } 
            else L[i][j] = 0; 
        } 
    } 
    return result; 
} 
  
int main() 
{ 
    char X[] = "OldSite:GeeksforGeeks.org"; 
    char Y[] = "NewSite:GeeksQuiz.com"; 
  
    int m = strlen(X); 
    int n = strlen(Y); 
  
    cout << "Length of Longest Common Substring is " 
         << LCSubStr(X, Y, m, n); 
    return 0; 
} 