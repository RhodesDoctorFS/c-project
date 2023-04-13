#include <bits/stdc++.h>
using namespace std;
int n;
int total=1;
int main()
{
    cin>>n;
    while (n>0)
    {
        total*=n;
        total%=100000;
        n-=2;
    }
    cout<<total;
}
