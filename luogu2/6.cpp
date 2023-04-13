#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin>>a[i];
    }
    sort(a,a+3);
    int gcd=__gcd(a[0],a[2]);
    a[0]/=gcd;
    a[2]/=gcd;
    printf("%d/%d",a[0],a[2]);
     return 0;
}