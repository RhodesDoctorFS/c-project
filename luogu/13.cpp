#include<iostream>
using namespace std;
int local(int);
int luogu(int);
int main()
{
    int n;
    cin>>n;
    if (local(n)<luogu(n))
    {
        cout<<"Local";
    }else
    {
        cout<<"Luogu";
    }
     return 0;
}
int local(int n){
    return 5*n;
}
int luogu(int n){
    return 11+3*n;
}