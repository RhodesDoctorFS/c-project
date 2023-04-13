#include<iostream>

using namespace std;
long long int mut(long long int);
int main()
{
    long long int a,b=1;
    int c;
    cin>>a;
    while (1)
    {   
        c=mut(b);
        if (c>=a&&c%a==0)
        {
            cout<<b;
            break;
        }
        b++;
        
    }
     return 0;
}
long long int mut(long long int b)
{
    if (b==1)
    {
        return 1;
    }
    else
    {
        return b*mut(b-1);
    }
}