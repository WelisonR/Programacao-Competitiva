#include <bits/stdc++.h>
#define len(x) (int) (x.size())
using namespace std;

int main(){
    vector<int> set {3, 2, 1};
    sort(set.begin(), set.end());
    do {
        cout << "Permutação: ";
        for(int val : set) {
            cout << val << ' ';
        }
        cout << '\n';
    } while(next_permutation(set.begin(), set.end()));
    // Rearranges the elements in the range [first,last) into the next lexicographically greater permutation.
    return 0;
}