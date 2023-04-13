#include <bits/stdc++.h>
using namespace std;
const int maxn=100001;
int fa[maxn];
int sz[maxn];
void creat(int n){
    for (int i = 1; i <=n; i++)
    {
        fa[i]=i;
        sz[i]=1;
    }    
}
int findroot(int x){
    if (fa[x]==x)
    {
        return x;
    }
    fa[x]=findroot(fa[x]);
    return fa[x];

}
void mix(int x,int y){
    x=findroot(x),y=findroot(y);
    if (x==y)
    {
        return;
    }
    if (sz[x]<sz[y])
    {
        swap(x,y);
    }
    fa[y]=x;
    sz[x]+=sz[y];
}

int main(){
    
    int n,m;
    cin>>n>>m;
    creat(n);
    for (int i = 0; i < m; i++)
    {
        int x,y;
        cin>>x>>y;
        mix(x,y);
    }
    int ans=0;
    for (int i =1; i <=n; i++)//统计集合数量
    {
        if (fa[i]==i)//寻找root
        {
            ans++;
        }     
    }
    
    cout<<ans-1;
    
}