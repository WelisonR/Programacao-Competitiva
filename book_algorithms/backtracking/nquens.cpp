// https://www.youtube.com/watch?v=xouin83ebxE
// https://leetcode.com/problems/n-queens/
#include <bits/stdc++.h>
#define len(x) (int) (x.size())
using namespace std;

// Número de diagonais: M+N-1
// Estratégia: conta-se as linhas no topo e as linhas não utilizadas na parte inferior
int column[20] = {0}, mainDiagonal[39] = {0}, secondaryDiagonal[39] = {0};
int n = 8, cont = 0;

void queens_positions() {
    cout << "Posições por coluna: ";
    for(int i = 0; i < 4; i++) cout << column[i] << ' ';
    cout << '\n';
}

void search(int y) { // coloca uma rainha na linha y
    if(y == n) {
        cont++;
        queens_positions();

        return;
    }
    for(int x = 0; x < n; x++) {
        /**
         * x+y e x-y+n-1 são valores que conseguem representar a diagonal principal e diagonal secundária, respectivamente
         * example: column[0] = 3, a rainha da coluna 0 está em (0, 3-1)
         * obs: se há um valor em vet[i], significa que há uma rainha que alcança a diagonal que tem tal valor
         */
        if(column[x] || mainDiagonal[x+y] || secondaryDiagonal[x-y+n-1]) continue; // constraints
        column[x] = mainDiagonal[x+y] = secondaryDiagonal[x-y+n-1] = y+1; // choice
        search(y+1);
        column[x] = mainDiagonal[x+y] = secondaryDiagonal[x-y+n-1] = 0; // backtrack
    }
}

int main(){
    search(0);
    return 0;
}
