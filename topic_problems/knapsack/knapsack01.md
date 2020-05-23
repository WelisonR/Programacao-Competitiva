# Problema

Disponível em:
*   https://leetcode.com/problems/partition-equal-subset-sum/

# Solução

```cpp
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int cumulativeSum = 0;
        for(int i = 0; i < nums.size(); i++) {
            cumulativeSum += nums[i];
        }
        // Dado a+b = cumulativeSum e cumulativeSum é ímpar, a = ímpar e b = par ou vice-versa
        if(cumulativeSum % 2 == 1) {
            return false;
        }
        
        int target = cumulativeSum/2;
        int knapsack[10001] = {0}; // maxBag (peso) = 200*100/2+1 = 10001
        for(int i = 0; i < nums.size(); i++) { // itens da mochila
            for(int j = target; j >= nums[i]; j--) { // peso da mochila
                knapsack[j] = max(knapsack[j], knapsack[j-nums[i]]+nums[i]);
                if(knapsack[j] == target) {
                    return true;
                }
            }
        }
        
        return false;
    }
};
```