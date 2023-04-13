#include<iostream>

using namespace std;
int main()
{
    long long int n,k;
    long long int km=0;
    cin>>n>>k;
    for ( int i=1; i<=k; i++)
    {
        if (n%6!=0&&n%7!=0)
        {
            km+=250;
        }
        if(n==7){
            n=1;
        }else
        {
            n++;
        }
    }
    cout<<km;
     return 0;
}