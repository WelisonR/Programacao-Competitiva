#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> scheduling(vector<pair<int, int>> schedules) {
    vector<pair<int, int>> ans;
    sort(schedules.begin(), schedules.end(),
        [](const pair<int, int>& a, const pair<int, int>& b) -> bool {
            return a.second < b.second;
        });
    ans.push_back({schedules[0].first, schedules[0].second});
    int last = 0;
    for(int i = 1; i < (int)schedules.size(); i++) {
        if(schedules[i].first >= schedules[last].second) {
            ans.push_back({schedules[i].first, schedules[i].second});
            last = i;
        }
    }

    return ans;
}

// Scheduling Algorithm: solução ótima é ordenar pelo tempo de término
int main(){
    vector<pair<int, int>> schedules = {{5, 9}, {1, 2}, {3, 4}, {0, 6}, 
                                            {5, 7}, {8, 9}};
    vector<pair<int, int>> schedules2 = {{1, 3}, {2, 5}, {3, 9}, {6, 8}};

    vector<pair<int, int>> ans = scheduling(schedules2);

    for(auto schedule : ans) {
        cout << "( " << schedule.first << ", " << schedule.second << " )" << '\n';
    }

    return 0;
}