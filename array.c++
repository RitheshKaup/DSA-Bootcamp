#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> prices = {1, 2, 3, 2, 1, 6};
    int buy = prices[0];
    int maxprofit = 0;
    for (int i = 1; i < size(prices);i++){
        if(prices[i]<buy){
            buy = prices[i];
        }
        int profit = prices[i]-buy;
        if(profit>maxprofit){
            maxprofit = profit;
        }
        
    }
    cout << maxprofit;
    return 0;
}