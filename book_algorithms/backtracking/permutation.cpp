#include <bits/stdc++.h>
#define len(x) (int) (x.size())
using namespace std;

// https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/

void permuteRecursive(vector<int> &num, int begin, vector<vector<int> > &result)	{
    if (begin == (int)num.size()) {
        result.push_back(num);
        return;
    }
    
    for (int i = begin; i < (int)num.size(); i++) {
        swap(num[begin], num[i]);
        permuteRecursive(num, begin + 1, result);
        swap(num[begin], num[i]);
    }
}

vector<vector<int>> permute(vector<int> &num) {
    vector<vector<int>> result;
    
    permuteRecursive(num, 0, result);
    return result;
}

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

    cout << "--------------------" << '\n';

    vector<int> case1 {1, 2, 3};
    vector<vector<int>> ans = permute(case1);
    for(int i = 0; i < (int)ans.size(); i++) {
        for(int j = 0; j < (int)ans[i].size(); j++) {
            cout << ans[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}