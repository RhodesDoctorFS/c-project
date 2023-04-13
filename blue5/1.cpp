#include <bits/stdc++.h>
using namespace std;
int ans[10001];
int N;
void solve(int n)
{
    for (int i = 1; i <=n; i++)
    {
        ans[i]=(n-i)*2;
    }
    if(n==1)
    {
        ans[1]=1;
    }
    ans[n]=ans[1];
}
int main()
{
    cin>>N;
    solve(N);
    for (int i = 1; i <=N; i++)
    {
        cout<<ans[i]<<endl;
    }
}   