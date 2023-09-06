//***************************PROBLEM STATEMENT********************* 
//Minimum Number of Platforms Required for a Railway/Bus Station

// Givn h arrival and dparur ims of all rains ha rach a railway saion, h ask is o find h minimum
// numbr of plaforms rquird for h railway saion so ha no 

#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>


using namespace std;


float string_to_float(string &s)
{
    int ptr1 = 0;
    int integer = 0;
  
    while(s[ptr1] != ':')
    {
        int temp = s[ptr1] - '0';
        if(temp == 0)
        {
        integer =  integer + temp;

        }
        else{
            integer = integer*10  + temp; 
        }
        ptr1++;
       
    }

    ptr1++;
    float nextToPoint= s[ptr1] - '0';
    float floatPart = nextToPoint/10;


   float  output = integer + floatPart;
  
    return output;
}

vector<float> converter(vector<string> &v)
{
    vector<float > output;

    for(int i = 0;i<v.size();i++)
    {
        float temp = string_to_float(v[i]);
        output.push_back(temp);
    }

    return output;
}



int cmp(vector<float> first,vector<float> second)
{
    return first < second;
}



int Minimum_required_plateform(vector<float> &arrival_time,vector<float> &depature_time)
{
    vector<vector<float> > time;

    for(int i = 0;i<arrival_time.size();i++)
    {
        time.push_back({arrival_time[i],depature_time[i]});
    }

    sort(time.begin(),time.end(),cmp);

    int count =0;
    int previous_end_point = time[0][1];

    for(int i = 1;i<time.size();i++)
    {
        if(time[i][0] > previous_end_point)
        {
            previous_end_point = time[i][1];
        }
        else{
            count++;
        }
    }

    return count;
}



int main()
{
    int size;
    cout<<"Enter the Number of the trains : ";
    cin>>size;


    vector<string> arrival_time(size);
    vector<string> depature_time(size);

    cout<<"Enter the arrival timing : "<<endl;

    for(int i =0;i<size;i++)
    {
        cin>>arrival_time[i];
    }

    cout<<"Enter the depature timing : "<<endl;

    for(int i = 0;i<size;i++)
    {
        cin>>depature_time[i];
    }

    vector<float> arr_time = converter(arrival_time);
    vector<float> dep_time = converter (depature_time);


 int required_Plateform =    Minimum_required_plateform(arr_time,dep_time);

 cout<<"Minimum Required Plateform is : "<<required_Plateform<<endl;

    return 0;
}
/**
 * Jai Jai Jai Bajarangbali..
 * This program is coded by jay kishan kharwar
 * at time : 6:38
 * date : 09:05:2023
 * 
*/