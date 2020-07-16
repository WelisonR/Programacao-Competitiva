#include <bits/stdc++.h>
using namespace std;

void show_pascal_triangle(vector<vector<long long>> &pascalTriangle) {
    for(int i = 0; i < (int) pascalTriangle.size(); i++) {
        for(int j = 0; j < (int) pascalTriangle[i].size(); j++) {
            cout << pascalTriangle[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main(){
    // Construção do triângulo de pascal
    // É possível armazenar em long long até a linha 67, aproximadamente
    vector<vector<long long>> pascalTriangle(67);
    pascalTriangle[0] = {1};
    pascalTriangle[1] = {1, 1};
    for(int i = 2; i < (int) pascalTriangle.size(); i++) {
        for(int j = 0; j <= i; j++) {
            if(j == 0 || j == i) {
                pascalTriangle[i].push_back(1);
            }
            else {
                pascalTriangle[i].push_back(pascalTriangle[i-1][j-1]+pascalTriangle[i-1][j]);
            }
        }
    }

    show_pascal_triangle(pascalTriangle);
    
    return 0;
}