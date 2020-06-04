// https://cp-algorithms.com/graph/finding-cycle.html

#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> adj[100010];
vector<char> color;
vector<int> parent;
int cycle_start, cycle_end;

bool dfs(int v) {
    color[v] = 1;
    for(int u : adj[v]) {
        if(color[u] == 0) { // nó ainda não visitado
            parent[u] = v;
            if(dfs(u))
                return true;
        } else if(color[u] == 1) { // nó está na stack
            cycle_end = v;
            cycle_start = u;
            return true;
        }
    }
    color[v] = 2; // nó saiu da stack
    return false;
}

void find_cycle() {
    color.assign(n, 0);
    parent.assign(n, -1);
    cycle_start = -1;

    for(int v = 0; v < n; v++) {
        if(color[v] == 0 && dfs(v))
            break;
    }

    if(cycle_start == -1) {
        cout << "Acyclic" << '\n';
    }
    else {
        vector<int> cycle;
        cycle.push_back(cycle_start);
        for(int v = cycle_end; v != cycle_start; v = parent[v])
            cycle.push_back(v);
        cycle.push_back(cycle_start);
        reverse(cycle.begin(), cycle.end());

        cout << "Cycle found: ";
        for(int v : cycle)
            cout << v << ' ';
        cout << endl;
    }
}

int main(){
    // vector<vector<int>> edges { {1, 2}, {2, 3}, {2, 4},
    //                     {2, 6}, {4, 5}, {4, 6} };
    // n = 6;
    vector<vector<int>> edges { {0, 1}, {0, 2}, {1, 2},
                            {2, 0}, {2, 3}, {3, 3}};
    n = 4;
    // vector<vector<int>> edges { {0, 1}, {1, 0}};
    // n = 2;

    for (const auto edge : edges) {
        adj[edge[0]].push_back(edge[1]);
    }

    find_cycle();
    
    return 0;
}