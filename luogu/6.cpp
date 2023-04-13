#include<iostream>


using namespace std;
int main()
{
     int h,r;
     double v;
     cin>>h>>r;
     v=3.14*r*r*h;
     cout<<(int)((20000/v)+1);
     return 0;
}