//***********************PROBLEM STATEMENT*********************
// There are given N ropes of different lengths, we need to connect these ropes into one ropeu The cost to
// connect two ropes is equal to sum of their lengthsu The task is to connect the ropes with minimum costu Given
// N size array arr[] contains the lengths of the ropesu 

#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int Min_cost_to_connect_ropes(vector<int> &arr)
{
    priority_queue<int,vector<int>,greater<int>> pq;

    for(auto ele : arr)
    {
        pq.push(ele);
    }

    int cost = 0;

    while(pq.size() != 1)
    {
        int first, second;
        first = pq.top();
        pq.pop();
        second= pq.top();
        pq.pop();

        int sum = first  + second;

        cost += sum;

        pq.push(sum);
    }


    return cost;
}
int main()
{   
    int n;
    cout<<"Enter the value of the rope : ";
    cin>>n;

    vector<int> v(n);

    cout<<"Enter the Length of the ropes : "<<endl;

    for(int i =0;i<n;i++)
    {
        cin>>v[i];
    }

    int minimum_cost = Min_cost_to_connect_ropes(v);

    cout<<"Minimum cost to connect ropes : "<<minimum_cost<<endl;
    
    return 0;
}
/**
 * Jai Jai Jai Bajarangbali..
 * This program coded by jay kishan kharwar
 * at
 * time : 3:40
 * date : 02-09-2023
 *
*/

