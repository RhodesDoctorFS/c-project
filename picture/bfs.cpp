#include <bits/stdc++.h>
using namespace std;
queue <int> q;//访问队列
int dis[20001];//记录每个点到最初点的距离
int n,m,k;//n是点数m是边数
vector<int> edge[20001];//邻接表记录图
void addmap(int a,int b){//图的写入
    edge[a].push_back(b);
    edge[b].push_back(a);
}
int bfs(int a,int b){//a为起点，b为终点
    memset(dis,-1,sizeof(dis));//将所有的点距离设为-1
    dis[a]=0;//初始点距离自己的距离是0
    q.push(1);//初始点入队
    while (!q.empty())//如果队列为空则bfs结束
    {
        int x=q.front();//记录队首
        q.pop();//队首出队
        for ( auto i:edge[x])//枚举与队首节点相连的所有点
        {
            q.push(i);//将枚举到的点入队
            if (dis[i]=-1)//如果该点从未遍历过
            {
                dis[i]=dis[x]+1;//则该点的距离为队首点距离+1
            }
            if (i==b)//如果遍历到了终点
            {
                while (!q.empty()){//立即清空队列
                    q.pop();
                }
                return dis[i];//将终点距离返回
            }
        }
    }
    return -1;
}
int main(){
    cin>>n>>m>>k;
    for (int i = 0; i < m; i++)
    {
        int x,y;
        cin>>x>>y;
        addmap(x,y);
    }
    for (int i = 0; i < k; i++)
    {
        int x,y;
        cin>>x>>y;
        cout<<bfs(x,y)<<endl;
    }
}