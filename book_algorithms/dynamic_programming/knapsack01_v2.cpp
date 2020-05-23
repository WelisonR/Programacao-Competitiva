#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> profits {1, 4, 5, 7}, weights {1, 3, 4, 5};
    int maxBag = 7, nItems = profits.size();    
    int knapsack[nItems+1][maxBag+1]; // Número de itens e tamanho da mochila
    
    for(int i = 0; i <= nItems; i++) {
        for(int j = 0; j <= maxBag; j++) {
            if(i == 0 || j == 0)
                knapsack[i][j] = 0; // Caso base, em que não há itens ou não há peso disponível
            else if (j < weights[i-1]) // Não é possível selecionar um item da linha devido ao seu peso
                knapsack[i][j] = knapsack[i-1][j]; // Não seleciona o item, toma o melhor caso da linha acima
            else // escolhe entre não pegar o item da linha atual ou pegar o item da linha atual, pagar 
                 // o custo e com o resto de peso disponível pegar o melhor resultado da linha anterior
                knapsack[i][j] = max(knapsack[i-1][j], profits[i-1]+knapsack[i-1][j-weights[i-1]]);
        }
    }

    // Reconstruir as escolhas do knapsack
    vector<int> knapsackChoices;
    int i = nItems, j = maxBag;
    while(knapsack[i][j] != 0) {
        if(i <= 0 || j <= 0) break;

        if(knapsack[i][j] != knapsack[i-1][j]) { // Escolheu o item da linha atual
            knapsackChoices.push_back(profits[i-1]);
            j-= weights[i-1];
            i--;
        }
        else { // Não escolheu o item da linha atual
            i--;
        }
    }

    cout << "Profits escolhidos pelo algoritmo: " << '\n';
    for(int i = 0; i < (int) knapsackChoices.size(); i++) {
        cout << knapsackChoices[i] << ' ';
    }

    cout << "\n\nTabela gerada pelo algoritmo Knapsack 0/1: " << '\n';
    for(int i = 0; i <= nItems; i++) {
        for(int j = 0; j <= maxBag; j++) {
            cout << knapsack[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}