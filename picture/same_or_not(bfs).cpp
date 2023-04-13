#include <bits/stdc++.h>
using namespace std;
int n,m,ans,a[9][9],b[9][9],c[9];
//n是点数，m是边数，ans是同构数量，c记录映射关系，下标是b图，内容是a图
bool r[9];//记录当前点是否用过了
inline bool dfs(int x)//x是当前映射的点
{
    if(x==n+1)//看当前dfs是否走到尽头了，是的话进入判断程序
    {
        bool ok=true;
        for (int i = 1; i <=n&&ok; i++)
        {
            for (int j = 0; i <=n&&ok; i++)
            {
                if(a[i][j]!=b[c[i]][c[j]]){
                    ok=false;
                    return false;
                }
            }
        }
        return ok;
    }
    for (int i = 1; i <=n; i++)
    {
        if (r[i]==false)
        {
            c[x]=i;
            r[i]=true;
            if(dfs(x+1))
            {
                return true;
            }
            r[i]=false;
        }
    }
    return false;
}
int main(){
    cin>>n>>m;
    for (int i = 1; i <=m; i++)
    {
        int x,y;
        cin>>x>>y;
        a[x][y]=a[y][x]=1;
    }  
    for (int i = 1; i <=m; i++)
    {
        int x,y;
        cin>>x>>y;
        b[x][y]=b[y][x]=1;
    } 
    if (dfs(1))
    {
        cout<<"yes";
    }else
    {
        cout<<"no";
    }   
}
