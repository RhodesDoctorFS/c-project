#include <bits/stdc++.h>
using namespace std;

vector<int> nodes[51];
int father[51];
int n;//
void add(int x,int y)
{
    nodes[x].push_back(y);//在x点后加上儿子y
    father[y]=x;
}
vector <int> dfn;
void dfs(int x){
    
    dfn.push_back(x);
    for (int i = 0; i <nodes[x].size(); i++)//遍历x的所有儿子,
    //又可写作：for(auto i:node[x]),i会遍历node[x]的每一个元素
    {
        dfs(nodes[x][i]);//访问儿子进行递归
    } 
    
}
int root=1;
int main(){
    cin>>n;
    int a,b;
    for (int i = 1; i <=n; i++)
    {
        cin>>a>>b;
        add(a,b);
    }
    dfs(root);
    for (int i=0;i<dfn.size();i++)
    {
        cout<<dfn[i]<<',';
    }  
}