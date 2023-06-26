

#include<iostream>
#include<vector>
using namespace std;


    int minCostHelper(vector<int>& days, vector<int>& costs, int i){

        // base case
        if(i >= days.size()) return 0;

        // one case 

        // for 1 day pass
        int cost1 = costs[0] + minCostHelper(days, costs, i+1);

        // for 7 days pass
        int passEndDay = days[i] + 7 - 1;
        int j = i;
        while(j < days.size() && days[j] <= passEndDay)j++;

        int cost7 = costs[1] + minCostHelper(days, costs, j);

        // for 30 days pass
        passEndDay = days[i] + 30 - 1;
         j = i;
        while(j < days.size() && days[j] <= passEndDay)j++;

        int cost30 = costs[2] + minCostHelper(days, costs, j);


        return min(cost1, min(cost7, cost30));


    }

    int mincostTickets(vector<int>& days, vector<int>& costs) {
        return minCostHelper(days, costs, 0);
    }


int main(){

    vector<int> days = {1,4,6,7,8,20};
    vector<int> costs = {1, 4, 25};

    cout << mincostTickets(days, costs) << endl;

    return 0;
}