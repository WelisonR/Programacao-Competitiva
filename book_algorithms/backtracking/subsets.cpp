#include <bits/stdc++.h>
#define len(x) (int) (x.size())
using namespace std;

void display_subset(vector<int> myvs) {
    cout << "Conjunto: ";
    for(int val : myvs) {
        cout << val << ' ';
    }
    cout << '\n';
}

int main(){
    vector<int> set {2, 3, 5};

    // bit representa se o elemento i está no subconjunto
    for(int i = 0; i < (1 << len(set)); i++) {
        vector<int> subsets;
        for(int j = 0; j < len(set); j++) {
            if(i & (1 << j)) { // i-ésimo bit ativo
                subsets.push_back(j);
            }
        }
        display_subset(subsets);
    }
    
    return 0;
}