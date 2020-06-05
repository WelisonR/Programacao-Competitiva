#include <bits/stdc++.h>
using namespace std;

int setsize[200010], fathers[200010];
vector<pair<int, pair<int, int>>> edges;

int find(int idx) {
    while(fathers[idx] != idx)
        idx = fathers[idx];
    return idx;
}

void unite(int a, int b) {
    int fa = find(a), fb = find(b);
    if(setsize[fa] < setsize[fb]) swap(fa, fb);
    setsize[fa] += setsize[fb];
    fathers[fb] = fa;
}

bool hasCycle(int numCourses, vector<vector<int>>& prerequisites) {
    for(auto edge : prerequisites) {
        edges.push_back({1, {edge[0], edge[1]}});
    }
    // sort(edges.begin(), edges.end());
    for(int i = 0; i < numCourses; i++) {
        fathers[i] = i;
        setsize[i] = 1;
    }
    for(auto fedge : edges) {
        int fnode = fedge.second.first, snode = fedge.second.second;
        if(find(fnode) == find(snode))
            return true;
        else
            unite(fnode, snode);
    }
    return false;
}

// Detecção de ciclos em grafos não direcionados com Kruskall
// Código foi feito próximo ao algoritmo de Kruskall para praticar
int main(){
    // int numCourses = 4;
    // vector<vector<int>> prerequisites { {0, 1}, {1, 2}, {2, 3}, {3, 0} };
    // int numCourses = 2;
    // vector<vector<int>> prerequisites { {0, 1} };
    int numCourses = 3;
    vector<vector<int>> prerequisites { {0, 1}, {2, 0}, {1,2} };

    cout << hasCycle(numCourses, prerequisites) << '\n';
    return 0;
}