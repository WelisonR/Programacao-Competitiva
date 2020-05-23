#include <bits/stdc++.h>
#define len(x) (int) (x.size())
using namespace std;

/*
    Knapsack 0/1. O(n) em espaço e O(n*S) em tempo.
    Não é possível dividir o item
    Sejam os profits e os pesos:
        *   ($3, 4kg),
        *   ($2, 1kg),
        *   ($6, 3kg)
    Seja a capacidade S = 8 kg a capacidade da mochila.
    Logo, monta-se o array:

    | 0 |  0 |  0 |  0 |  0 |  0 |  0 |  0 |  0 |
      0    1    2    3    4    5    6    7    8

    Pega-se o primeiro item ($3, 4kg) e, da direita para a esquerda,
    adiciona-o ao array:

    | 0 |  0 |  0 |  0  | 3 |  3  | 3 |  3 |  3  |
      0    1    2    3    4    5    6    7    8

    Segundo item ($2, 1kg):

    | 0 |  2  | 2  | 2 |  3  | 5  | 5  | 5  | 5  |
      0    1    2    3    4    5    6    7    8
    
    Terceiro item ($6, 3kg):

    | 0 |  2 |  2 |  6 |  8 |  8 |  8 |  9 | 11 |
      0    1    2    3    4    5    6    7    8  
    
    Generalizando: knapsack[w] = max(knapsack[w], knapsack[w-weights[i]]+profits[i]);

    Resposta: max(array)
*/

int main(){
    vector<int> profits {3, 2, 6}, weights {4, 1, 3};
    int maxBag = 8;
    vector<int> knapsack(maxBag+1, 0);

    for(int i = 0; i < len(profits); i++) {
        // Percurso deve ser feito da direita para a esquerda
        for(int w = maxBag; w >= weights[i]; w--) {
            knapsack[w] = max(knapsack[w], knapsack[w-weights[i]]+profits[i]);
        }
        // Os elementos da linha atual correspondem aos elementos da linha do knapsack 2D
    }

    cout << "Melhor profit: " << knapsack[maxBag] << '\n';

    return 0;
}