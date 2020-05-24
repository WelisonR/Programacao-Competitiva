#include <bits/stdc++.h>
using namespace std;

// dp[mask] = sum(chosen number) % target
// nums = [2,1,4,3,5,6,2], mask = "1100101" , escolhidos: 2,1,5,2
bool canPartitionKSubsets(vector<int>& nums, int k) {
    int sum = 0, n = nums.size();
    for(int num : nums) sum += num;
    if(sum%k != 0) return false;

    int target = sum/k;
    vector<int> dp((1<<18)+1, -1);
    dp[0] = 0;
    for(int mask = 0; mask < (1<<n); mask++) {
        if(dp[mask] == -1) continue;
        for(int j = 0; j < n; j++) {
            if(!(mask&(1<<j)) && dp[mask]+nums[n-1-j] <= target) { // bit não setado && não ultrapassa o limite do "balde"
                dp[mask|(1<<j)] = (dp[mask]+nums[n-1-j]) % target; // nums[n-1-j] = j-ésimo elemento da direita para esquerda 
            }
       }
    }
    return dp[(1<<n)-1] == 0;
}


int main(){
    // No, Yes, No
    vector<int> A {71, 69, 9, 16, 41, 50, 97, 24, 19, 46, 47, 52, 22, 56, 80, 89, 65, 29, 42, 51, 94, 1, 35, 65, 25, 15, 88, 57, 44};
    vector<int> B {29, 28, 51, 85, 59, 21, 25, 23, 70, 97, 82, 31, 85, 93, 73};
    vector<int> C {4, 3, 2, 3, 5, 2, 1};
    int K1 = 2, K2 = 3, K3 = 4;

    if(canPartitionKSubsets(B, K2)) {
        cout << "Partition possible" << '\n';
    }
    else {
        cout << "Partition is not possible" << '\n';
    }
    
    return 0;
}