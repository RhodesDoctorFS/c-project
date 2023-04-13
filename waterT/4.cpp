#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
     double s,v;
     int t;
     cin>>s>>v;
     t=s/v+10;
     int h,min;
     h=t/60;
     min=t%60;
     int h2=7-h,min2=59-min;
     printf("%02d:%02d",h2, min2);

     return 0;
}