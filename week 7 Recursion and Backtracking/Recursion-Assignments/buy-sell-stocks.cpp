

#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

void maxProfitFinder(vector<int>&prices, int i, int& minPrice, int& maxProfit){

    // base case
    if(i==prices.size()) return;

    // onecase
    if(minPrice > prices[i]) minPrice = prices[i];
    int todaysProfit = prices[i] - minPrice;
    if(maxProfit < todaysProfit ) maxProfit = todaysProfit;

    // recursive call
    maxProfitFinder(prices, i+1, minPrice, maxProfit);
}

int maxProfit(vector<int>& prices){
    int minPrice = INT_MAX;
    int maxProfit = INT_MIN;

    maxProfitFinder(prices, 0, minPrice, maxProfit);

    return maxProfit;
}


int main(){

    vector<int > prices = {7, 1, 5, 3, 6, 4};

    cout << maxProfit(prices) << endl;


    return 0;
}