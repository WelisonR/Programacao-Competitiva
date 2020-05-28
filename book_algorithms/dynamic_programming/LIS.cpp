#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/longest-increasing-subsequence/

int lengthOfLISDP(vector<int>& nums) {
    if(nums.size() == 0) return 0;
    vector<int> ans(nums.size(), 1);
    for(int i = 1; i < nums.size(); i++) { 
        for(int j = 0; j < i; j++) { // j -> i, dp contabiliza LIS
            if(nums[i] > nums[j]) { // ordem crescente
                ans[i] = max(ans[i], ans[j]+1);
            }
        }
    }

    return *max_element(ans.begin(), ans.end());
}

/*
 Vídeo intuitivo: https://www.youtube.com/watch?v=22s1xxRvy28&feature=youtu.be

 Array T is recording the last index of LIS of length 1 (at T[0]),
 LIS of length 2 (at T[1]) and so on...
 Example: -1 2 3 12 (LIS of length 4)
 Now if we find 7,  it is always better to save the array as -1 2 3 7.
 If you think greedily you will see why. Suppose your array has 9,10,11 yet to be discovered.
 If you did not change the 12 to 7 then you will never get the longest LIS because 9,10,11 are less than 12.
 At each step we update T greedily and whenever we find a longer LIS than we already have,
 we add the current index (the ending point of our newly found longest LIS) to the end of T.
*/
int lengthOfLIS(vector<int>& nums) {
    if(nums.size() == 0)
        return 0;
    
    vector<int>::iterator m = nums.begin();
    for(int& val : nums) {
        auto it = lower_bound(nums.begin(), m, val);
        *it = val;
        if(it == m)
            m++;
    }

    return m - nums.begin();
}

int main(){
    vector<int> nums {10, 9, 2, 5, 3, 7, 101, 18};
    int ans = lengthOfLIS(nums);
    cout << ans << '\n';

    return 0;
}