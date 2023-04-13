#include <bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
    return x>y;
}
int n,m;
int commnd1,number;
int N[100001];
int main(){
    cin>>n>>m;
    for (int i = 1; i <= n; i++)
    {
        N[i]=i;
    }
    
    for (int i = 0; i < m; i++)
    {
        cin>>commnd1>>number;
        if (commnd1==0)
        {
            sort(N+1,N+number+1,cmp);
        }else
        {
            sort(N+number,N+n+1);
        }
    }
    for (int i = 1; i <=n; i++)
    {
        cout<<N[i]<<" ";
    }
}