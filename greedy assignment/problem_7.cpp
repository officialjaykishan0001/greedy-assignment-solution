#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int maxStocks(vector<int>& arr, int k) {
    int n = arr.size();
 
    // Create a vector of pairs to store the prices and corresponding day indices
    vector<pair<int, int>> prices;
    for (int i = 0; i < n; i++) {
        prices.push_back(make_pair(arr[i], i + 1));
    }
 
    // Sort the prices in ascending order
    sort(prices.begin(), prices.end());
 
    int stocks = 0;
    for (int i = 0; i < n; i++) {
        int price = prices[i].first;
        int day = prices[i].second;
 
        // Calculate the maximum number of stocks that can be bought on the current day
        int maxStocksOnDay = min(k / price, day);
 
        // Update the total number of stocks bought
        stocks += maxStocksOnDay;
 
        // Reduce the available amount of money based on the stocks bought
        k -= maxStocksOnDay * price;
    }
 
    return stocks;
}
 
int main() {
    int n, k;
    cout << "Enter the number of days: ";
    cin >> n;
 
    vector<int> arr(n);
    cout << "Enter the stock prices for each day: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    cout << "Enter the initial amount of money: ";
    cin >> k;
 
    int maxStocksBought = maxStocks(arr, k);
    cout << "\nThe maximum number of stocks that can be bought is: " << maxStocksBought << endl;
 
    return 0;
}