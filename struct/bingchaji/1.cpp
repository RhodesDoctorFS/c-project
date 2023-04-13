#include <bits/stdc++.h>
using namespace std;

const int maxn=100010;
int fa[maxn+1];
int sz[maxn+1];
int dep[maxn+1];

void initialize(int n){//初始化一个并查集
    for (int i = 1; i <=n; i++)
    {
        fa[i]=i;//每个元素的父亲元素都是自己
        sz[i]=dep[i]=1;//每个集合的大小和深度都是1
    }  
}
int findset(int x)//常规版，找x元素集合的代表元
{
    if (fa[x]==x)//如果自己的father是自己就代表找到了代表元
    {
        return x;
    }
    return findset(fa[x]);//否则就递归自己的父亲，找父亲的代表元
}
int findset_promax(int x)//路径压缩版
{
    if (fa[x]==x)
    {
        return x;
    }
    fa[x]=findset_promax(fa[x]);//递归时将所有的节点的父亲都归于集合的代表元，压缩路径
    return fa[x];
}
void Union(int x,int y)//大小合并
{
    int fx=findset(x),fy=findset(y);//寻找a与b的代表元
    if (fx==fy)//如果两个代表元是同一个，则在同一个集合
    {
        return;
    }
    if (sz[fx]>sz[fy])//如果fx的大小大于fy，就把fx和fy互换，确保小集合并入大集合
    {
        swap(fx,fy);
    }
    fa[fx]=fy;//小集合的代表元的父元素为大集合的代表元，并入操作
    sz[fy]+=sz[fx];//大集合fy的大小变为两集合之和
}
void Union_S(int x,int y)//正常合并
{
    int fx=findset(x),fy=findset(y);
    if (fx==fy)
    {
        return;
    }
    fa[fx]=fy;  
}
int main(){

}



//修路：把相互连通的城市群看为一个集合，数有多少个集合
//

int FA[maxn],SZ[maxn];
void chushihua(){
    for (int i = 1; i <=maxn; i++)
    {
        FA[i]=i;
    }
    
}
int findd(int a){
    if (a==FA[a])
    {
        return a;
    }
    FA[a]=findd(FA[a]);
    return FA[a];
}
int merge(int a,int b){
    a=findd(a),b=findd(b);
    if(a==b){
        return 0;
    }
    
}