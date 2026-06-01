#include<bits/stdc++.h>
using namespace std;

//brute
int maxProfit(vector<int>& prices){

    int n = prices.size();

    int profit = 0;

    for(int i=0; i<n; i++){

        for(int j=i+1; j<n; j++){

            profit = max(profit,
                        prices[j]-prices[i]);
        }
    }

    return profit;
}

//optimal
int maxProfit(vector<int>& prices){

    int mini = prices[0];

    int profit = 0;

    for(int i=1; i<prices.size(); i++){

        int cost = prices[i] - mini;

        profit = max(profit, cost);

        mini = min(mini, prices[i]);
    }

    return profit;
}

int main(){

    int n;
    cin >> n;

    vector<int> prices(n);

    for(int i=0; i<n; i++){

        cin >> prices[i];
    }

    cout << maxProfit(prices);

    return 0;
}