#include <bits/stdc++.h>
#define len(x) (int) (x.size())
using namespace std;
typedef long long ll;

bool canPartition(vector<int>& nums, vector<int>& visited, int start_index, int k, int cur_sum, int cur_num, int target){
    if(k==1) return true;
    if(cur_sum == target && cur_num > 0)
        return canPartition(nums, visited, 0, k-1, 0, 0, target);
    for(int i = start_index; i<nums.size(); i++){
        if(!visited[i]){
            visited[i] = 1;
            if(canPartition(nums, visited, i+1, k, cur_sum + nums[i], cur_num++, target))return true;
            visited[i] = 0;
        }
    }
    return false;
}

bool canPartitionKSubsets(vector<int>& nums, int k) {
    int sum = 0;
    for(int num:nums)sum+=num;
    if(k <= 0 || sum%k != 0) return false;
    vector<int> visited(nums.size(), 0);
    return canPartition(nums, visited, 0, k, 0, 0, sum/k);
}

int main(){
    // No, Yes, No
    vector<int> A {71, 69, 9, 16, 41, 50, 97, 24, 19, 46, 47, 52, 22, 56, 80, 89, 65, 29, 42, 51, 94, 1, 35, 65, 25, 15, 88, 57, 44};
    vector<int> B {29, 28, 51, 85, 59, 21, 25, 23, 70, 97, 82, 31, 85, 93, 73};
    vector<int> C {4, 3, 2, 3, 5, 2, 1};
    int K1 = 2, K2 = 3, K3 = 4;

    if(canPartitionKSubsets(C, K3)) {
        cout << "Partition possible" << '\n';
    }
    else {
        cout << "Partition is not possible" << '\n';
    }
    
    return 0;
}