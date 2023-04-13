#include <bits/stdc++.h>
using namespace std;
int D[2][2]={{1,0},{0,1}};//方向变量
bool route[31][31]={0};
int ans=0;
int n,m;
inline bool dfs(int x,int y){
    if (x>n||x<1||y>m||y<1||(x%2==0&&y%2==0))
    {
        return false;
        route[x][y]=0;//点位置不合法，视作没走
    }//位置合法与否
    if (x==n&&y==m)
    {
        return true;
    }//是否到达
    route[x][y]=1;//标记当前点
    for (int i = 0; i <2; i++)//枚举所有边
    {   
        x+=D[i][0];
        y+=D[i][1];
        if (dfs(x,y))//如果找到答案就ans++然后回溯
        {
            ans++;
            return false;//回溯到上一个点
        }else//退回上一格，枚举其他边
        {
            x-=D[i][0];
            y-=D[i][1];
        }
    }
    return false;//无边可以枚举则回溯到上一个点
}

int main(){
    cin>>n>>m;
    dfs(1,1);
    cout<<ans;
}