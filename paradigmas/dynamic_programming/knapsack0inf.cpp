// Knapsack 0/inf com possibilidade de repetição de itens
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> profits {1, 4, 7, 10}, weights {1, 2, 3, 5};
    int maxBag = 8, nItems = profits.size();    
    int knapsack[nItems+1][maxBag+1];
    
    for(int i = 0; i <= nItems; i++) {
        for(int j = 0; j <= maxBag; j++) {
            if(i == 0 || j == 0) {
                knapsack[i][j] = 0;
            }
            else if(j < weights[i-1]) {
                knapsack[i][j] = knapsack[i-1][j];
            }
            else {
                // Principal diferença em relação a versão do knapsack 0/1
                // É possível pegar mais de uma vez um item de dada linha
                knapsack[i][j] = max(knapsack[i-1][j], profits[i-1]+knapsack[i][j-weights[i-1]]);
            }
        }
    }

    vector<int> knapsackChoices;
    int i = nItems, j = maxBag;
    while(knapsack[i][j] != 0) {
        if(i <= 0 || j <= 0) break;

        if(knapsack[i][j] != knapsack[i-1][j]) {
            // Diferença para a versão 0/1 do knapsack: não precisa mudar de linha (item)
            knapsackChoices.push_back(profits[i-1]);
            j-= weights[i-1];
        }
        else {
            i--;
        }
    }

    cout << "Profits escolhidos pelo algoritmo: " << '\n';
    for(int i = 0; i < (int) knapsackChoices.size(); i++) {
        cout << knapsackChoices[i] << ' ';
    }

    cout << "\n\nTabela gerada pelo algoritmo Knapsack 0/inf: " << '\n';
    for(int i = 0; i <= nItems; i++) {
        for(int j = 0; j <= maxBag; j++) {
            cout << knapsack[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}