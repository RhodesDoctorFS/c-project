#include<iostream>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[11]={0};
    int b[11]={0};
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    b[0]=a[0];
    int sum=0;
    for (int i = 1; i < n; i++)
    {   
        sum+=b[i-1];
        b[i]=a[i]-sum;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<b[i]<<" ";
    }


     return 0;
}
