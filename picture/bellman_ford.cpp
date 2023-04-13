#include <bits/stdc++.h>
using namespace std;
int m=10085,n=10086;//m是边，n是点
struct edge
{
    int u,v,l;//u是第一个节点，v是第二个，l是两节点之间的长度
              //三个数据构成一条边
}Edge[10087];
int dist[10086];//记录每个节点到点s的距离
int pre[10086];//记录每个点的上一个节点
int road[10087];
int bellman_short(int s,int e){
    memset(dist,127,sizeof(dist));//设所有点距离起点为无穷大
    dist[s]=0;//起点距离自己为0
    bool update=false;//更新判断初始为0
    while (1)
    {
        for (int i = 1; i <=m; i++)//遍历所有的边
        {
            int u=Edge[i].u,v=Edge[i].v,l=Edge[i].l;//将当前边的数据取出
            if (u<(1<<30))//如果当前节点的距离能到达s
            {
                if (u+l<v)//判断是否进行松弛，比较v到s和u加上边权到s的长度，如果从u走更短就进行松弛
                {
                    dist[v]=u+l;
                    pre[v]=u;
                    update=true;
                }
            }
        }
        if(update==false){
            break;
        }
    }
    if (dist[e]<(1<<30))
    {
        road[1]=e;
        int cnt=1;
        cout<<dist[e]<<endl;
        for (int i=2;road[i]==s;i++)
        {
            road[i]=pre[road[--i]];
            cnt++;
        }
        for (int i =cnt;i>0 ; i--)
        {
            cout<<road[i]<<" ";
        }
    }
}