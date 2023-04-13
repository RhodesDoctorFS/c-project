#include <bits/stdc++.h>
using namespace std;


int main(){
    int count=0;
    int a[100001][2];
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        int x,y;
        cin>>x>>y;
        a[i][0]=x;
        a[i][1]=y;
        
    }
    for (int p1=0;p1!=n-1;p1++)
    {
        for (int p2 = (p1+1); p2!=n; p2++)
        {
            int sum=0;
            sum+=(a[p1][0]*a[p2][0]+a[p1][1]*a[p2][1]);
            if (sum%2==0)
            {
                count++;
            }            
        }      
    }
    cout<<count;
}