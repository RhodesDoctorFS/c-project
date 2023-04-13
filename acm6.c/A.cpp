#include<iostream>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int count=0;
    for (auto p=a.begin(); p!=a.end(); p++)
    {
        if (*p=='w')
        {
            count+=2;
        }else if (*p=='v')
        {
            count++;
        }     
    }
    cout<<count;
     return 0;
}