/*
- Procurar o maior número M;
- Guardar os x valores abaixo de M enquanto M % n != 0;
- Resposta: valor que pertença a x e esteja mais a direita.

// HARD CODE só pra praticar, há como otimizar mt o algoritmo
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, value;
    cin >> n >> m;

    vector<int> candies;
    for(int i = 0; i < n; i++) {
        cin >> value;
        candies.push_back(value);
    }

    int max_e = *max_element(candies.rbegin(), candies.rend());

    vector<int> ans; ans.push_back(max_e);
    int nvalues = max_e % m == 0 ? m-1 : max_e % m - 1;

    for(int i = 0; i < nvalues; i++) {
        ans.push_back(max_e-1-i);
    }

    int idx = 0, gambiarra = 0;
    for(int i = candies.size()-1; i >= 0; i--) {
        for(int j = 0; j < ans.size(); j++) {
            if (ans[j] == candies[i]) {
                idx = i;
                goto gambiarra; // se fosse no javão não tava fazendo gambiarra
            }
        }

    }

gambiarra:

    cout << idx+1 << '\n';

    return 0;
}