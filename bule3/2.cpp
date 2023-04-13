#include <bits/stdc++.h>
using namespace std;
unsigned long long int ms;
int HH,MM,SS;
bool h=0,m=0,s=0;
const int H=3600000,M=60000,S=1000;
void solve(unsigned long long int ss)
{
    HH=(ms/H)%24;
    MM=((ms%H)/M)%60;
    SS=((ms%M)/S)%60;
}
void print()
{
    if (HH<10)
    {
        h=true;
    }
    if (MM<10)
    {
        m=true;
    }
    if (SS<10)
    {
        s=true;
    }
    if (h)
    {
        cout<<'0'<<HH<<':';
    }else
    {
        cout<<HH<<':';
    }
    if (m)
    {
        cout<<'0'<<MM<<':';
    }else
    {
        cout<<MM<<':';
    }
    if (s)
    {
        cout<<'0'<<SS;
    }else
    {
        cout<<SS;
    }
}
int main()
{
    cin>>ms;
    solve(ms);
    print();
}