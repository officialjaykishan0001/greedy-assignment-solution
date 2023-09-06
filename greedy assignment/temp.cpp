#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

float time_to_float(string s)

{
    int intPart = s[0] - '0';

    float decimalPart = s[2] - '0';

    float Inpoint = decimalPart/10;

    return intPart + Inpoint; 

}

int main()
{
    string s = "9:40";

     cout<<time_to_float(s)<<endl;

    // int n = s[2] - '0';

    // cout<<2*n<<endl;
}
