#include <bits/stdc++.h>
using namespace std;
struct tree
{
    int l,r,fa;
}a[1025];

void pre(int);//先序
void mid(int node);//中序
void after(int node);//后序
int n;
int root=1;
int main(){
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        int x,y;
        cin>>x>>y;
        if (x!=0)
        {
            a[i].l=x;//当前节点的左子节点是x
            a[i+1].fa=i;//左子节点的父亲是当前节点（用编号表示
        }
        if (y!=0)//同上，输入右子节点
        {
            a[i].r=y;
            a[i+2].fa=i;
        }
    }
    pre(root);
    cout<<endl;
    mid(root);
    cout<<endl;
    after(root);
    
}
void pre(int node)//递归投入的是单元，这里将单元编号视为单元
{
    cout<<node<<" ";//输出节点编号
    if (a[node].l!=0)//左儿子不存在则触底反弹
    {
        pre(a[node].l);//左子节点存在，递归到该子节点
    }
    if (a[node].r!=0)//同上，右子节点
    {
        pre(a[node].r);
    }
}
void mid(int node)
{   
    if (a[node].l!=0)
    {
        mid(a[node].l);
    }
    cout<<node<<" ";
    if (a[node].r!=0)
    {
        mid(a[node].r);
    }
}
void after(int node)
{
    if(a[node].l!=0)
    {
        after(a[node].l);
    }
    if (a[node].r!=0)
    {
        after(a[node].r);
    } 
    cout<<node<<" ";
}