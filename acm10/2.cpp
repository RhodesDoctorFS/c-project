#include <bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
    return x>y;
}  

int main(){
    int a[5]={0};
    int number;
    int maxn=0,minn=0;
    cin>>number;
    int cnt=0;
    for (int i = 0;number>0; i++)
    {
        a[i]=number%10;
        number/=10;
        cnt++;
    }
    sort(a,a+cnt,cmp);
    for (int i=0;i<cnt;i++)
    {
        maxn+=a[i];
        maxn*=10;
    }
    maxn/=10;
    sort(a,a+cnt);
    for (int i=0;i<cnt;i++)
    {
        minn+=a[i];
        minn*=10;
    }
    minn/=10;
    cout<<maxn-minn;
}