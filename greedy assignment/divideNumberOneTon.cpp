#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//**********************Problem Statement***********************
// Given a positive integer n such that n > 2. Divide numbers from 1 to n in two groups such that absolute
// difference of sum of each group is minimum. Print any two groups with their size in first line and in next line
// print elements of that group


bool  cmp (int first,int second)
{
    return first> second;
}
void Groups(vector<int> &arr)
{
    sort(arr.begin(),arr.end(),cmp);

    vector<int> group_A,group_B;

    group_A.push_back(arr[0]);
    group_B.push_back(arr[1]);
    int sum_of_A = arr[0];
    int sum_of_B =arr[1];

    for(int i = 2;i<arr.size();i++)
    {
        if(sum_of_A > sum_of_B)
        {
            group_B.push_back(arr[i]);
            sum_of_B += arr[i];
        }
        else{
                group_A.push_back(arr[i]);
                sum_of_A += arr[i];
        }
    }

    cout<<"The Group A is : "<<endl;

    for(auto ele : group_A)
    {
        cout<<ele <<" ";
    }
    cout<<endl<<"The Group B is : "<<endl;

    for(auto ele : group_B)
    {
        cout<<ele<<" ";
    }
    cout<<endl;

    cout<<"The minimum sum difference is : "<<abs(sum_of_A - sum_of_B)<<endl;

    return ;
}

int main()
{
    int n; 
    cout<<"Enter The Value N : ";
    cin>>n;


    vector<int> arr;

    for(int i = 1;i<=n;i++)
    {
        arr.push_back(i);
    }   


    Groups(arr);


    return 0;
}
/**
 * Jai Jai Jai Bajarangbali...
 * This program is coded by jay kishan kharwar
 * at
 * time : 7:26
 * date : 5-09-2023
 * 
*/