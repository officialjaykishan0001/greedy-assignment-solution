#include <bits/stdc++.h>
using namespace std;
 
vector<int> getFibonacciTerms(int sum) {
    vector<int> terms;
    int a = 0, b = 1;
 
    // Add the first two terms
    terms.push_back(a);
    terms.push_back(b);
 
    // Generate Fibonacci terms until the sum is reached
    while (b < sum) {
        int next = a + b;
        terms.push_back(next);
        a = b;
        b = next;
    }
 
    return terms;
}
 
void printFibonacciTerms(const vector<int>& terms) {
    for (int i = 0; i < terms.size(); ++i) {
        cout << terms[i] << " ";
    }
    cout << endl;
}
 
int main() {
    int K;
    cout << "Enter the sum (K): ";
    cin >> K;
 
    vector<int> fibonacciTerms = getFibonacciTerms(K);
    vector<int> selectedTerms;
 
    int sum = 0;
    int index = fibonacciTerms.size() - 1;
 
    // Find the minimum number of terms with sum equal to K
    while (sum < K && index >= 0) {
        if (sum + fibonacciTerms[index] <= K) {
            sum += fibonacciTerms[index];
            selectedTerms.push_back(fibonacciTerms[index]);
        }
        index--;
    }
 
    cout << "\nMinimum number of Fibonacci terms: " << selectedTerms.size() << endl;
    cout << "Fibonacci terms: ";
    printFibonacciTerms(selectedTerms);
 
    return 0;
}