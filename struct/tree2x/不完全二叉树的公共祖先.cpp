#include <bits/stdc++.h>
using namespace std;
struct tree
{
    int l,r,fa;
};
int root=1;
int n; 
int main()
{
    tree a[1001];

    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        int x,y;
        cin>>x>>y;
        if (x!=0)
        {
            a[i].l=x;//当前节点的左子节点是x
            a[x].fa=i;//左子节点的父亲是当前节点（用编号表示
        }
        if (y!=0)//同上，输入右子节点
        {
            a[i].r=y;
            a[y].fa=i;
        }
    }
    //用数组储存从u，v开始回溯的路径，lu和lv来记录路径长度
    int u,v;
    cin>>u>>v;
    int lU=0,lV=0;
    int roadU[1001],roadV[1001];
    while (u!=root)//直到回溯到根为止
    {
        roadU[++lU]=u;//从u开始记录路径节点，每次读入一个节点路径长度+1
        u=a[u].fa;//回溯至父节点
    }
    while (v!=root)
    {
        roadV[++lV]=v;
        v=a[v].fa;
    }
    int samefather=0;//记录公共祖先
    //路径是倒序记录，路径的最后一位一定都为根
    //二者公共祖先节点前的节点一定相同
    //从跟开始向下数，直到出现不同的节点为止
    //那个不同节点之前的节点便是最近公共祖先
    for (int i = lV,j=lU;lU!=0&&lV!=0; i--,j--)
    {
        if (roadU[i]==roadV[j])
        {
            samefather=roadU[i];
        }else
        {
            break;
        }          
    }
    cout<<samefather;
    
}