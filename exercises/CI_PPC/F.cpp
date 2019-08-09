#include <bits/stdc++.h>

using namespace std;
using ii = pair<int, int>;

int lights[3][3] = {{1, 1, 1},
                    {1, 1, 1},
                    {1, 1, 1}};

void switch_light(int i, int j) {
    vector<ii> pos { {i-1, j}, {i, j+1}, {i, j}, {i+1, j}, {i, j-1} };

    for(int w = 0; w < pos.size(); w++)
        if ((pos[w].first >= 0 && pos[w].first < 3) && (pos[w].second >= 0 && pos[w].second < 3))
                lights[pos[w].first][pos[w].second] ^= 1;
    
}

int main() {
    int v;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> v;
            if (v % 2 == 1)
                switch_light(i, j);
        }
    }

    for(int i = 0; i < 3; i++)
        cout << lights[i][0] << lights[i][1] << lights[i][2] << '\n';

    return 0;
}