//************************Problem Statement*************************
// Given 3n 3mount, find t0e minimum number of notes of different denomin3tions t03t sum up to t0e given
// 3mount.

// We m3y 3ssume t03t we 03ve infinite supply of notes of v3lues {2000, 500, 200, 100, 50, 20, 10, 5, 1} 


#include<iostream>
#include<vector>

using namespace std;
/**
 * Time complexity : O(1)
 * Space complexity : O(1)
*/
int main()
{
    int amount ;
    cout<<"Enter the amount : ";
    cin>>amount;

    int two_thousands = 2000;
    int five_hundreds = 500;
    int two_hundreds = 200;
    int hundreds = 100;
    int fifty = 50;
    int twenty = 20;
    int ten = 10;
    int five = 5;
    int one = 1;

    int t_t_count = 0;
    int f_h_count = 0;
    int t_h_count = 0;
    int h_count = 0;
    int f_count = 0;
    int t_count = 0;
    int ten_count = 0;
    int five_count =0;
    int one_count =0;

    while(amount != 0)
    {
    if(amount >= 1 and amount < 5)
    {
        amount  = amount - one;
        one_count++;
    }
    else if(amount >= 5 and amount < 10)
    {
        amount = amount - five;
        five_count++;
    }
    else if(amount >= ten and amount < twenty)
    {
        amount = amount - twenty;
        ten_count++;
    }
    else if(amount >= twenty and amount < fifty )
    {
        amount = amount - twenty;
        t_count++;
    }
    else if(amount >= fifty and amount < hundreds)
    {
        amount = amount - fifty;
        f_count++;
    }
    else if(amount >= hundreds and amount < two_hundreds)
    {
        amount = amount - hundreds;
        h_count++;
    }
    else if(amount >= two_hundreds and amount < five_hundreds)
    {
        amount = amount - two_hundreds;
        t_h_count++;
    }
    else if(amount >= five_hundreds and amount < two_thousands)
    {
        amount = amount - five_hundreds;
        f_h_count++;
    }
    else if(amount >= two_thousands )
    {
        amount = amount - two_thousands;
        t_t_count++;
    }
}
    cout<<endl<<"Currency"<<"             ->          "<<"Count"<<endl;
    cout<<"One count - "<<"             ->          "<<one_count<<endl;
    cout<<"five  "<<"                   ->          "<<five_count<<endl;
    cout<<"ten "<<"                     ->          "<<ten_count<<endl;
    cout<<"twenty "<<"                  ->          "<<t_count<<endl;
    cout<<"fifty"<<"                    ->          "<<f_count<<endl;
    cout<<"Hundreds"<<"                 ->          "<<h_count<<endl;
    cout<<"Two Hundreds "<<"            ->          "<<t_h_count<<endl;
    cout<<"five hundreds"<<"            ->          "<<f_h_count<<endl;
    cout<<"two thoudsands"<<"           ->          "<<t_t_count<<endl;

    return 0;
}
/**
 * Jai Jai Jai Bajarangbali...
 * this program coded by jay kishan kharwar
 * at
 * time : 10:54
 * date : 05-09-2023
 * 
*/