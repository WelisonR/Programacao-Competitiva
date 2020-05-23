#include <bits/stdc++.h>
using namespace std;

/* Problema de Troca de moedas
    - 
*/

int coinChange(vector<int> &coins, int amount) {
    // inicializa com um valor que é inalcançável, evitar MAX_INT por conta do overflow
    vector<int> dp(amount + 1, amount+1);
    dp[0] = 0; // Com um total zero, o mínimo é zero moedas
    for (int coin : coins) {
        for (int i = coin; i <= amount; i++) {
            // Não pega a moeda atual; ou pega, paga o custo e soma ao melhor valor restante
            dp[i] = min(dp[i], dp[i - coin] + 1);
        }
    }
    return dp[amount] > amount ? -1 : dp[amount];
}

// Problema similar ao unbounded knapsack (knapsack 0/inf)
int main(){
    int amount = 3;
    vector<int> coins {2};

    cout << coinChange(coins, amount) << '\n';

    return 0;
}