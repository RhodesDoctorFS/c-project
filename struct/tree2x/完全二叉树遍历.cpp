#include <bits/stdc++.h>
using namespace std;
void pre(int);//先序
void mid(int node);//中序
void after(int node);//后序
int n;
int main(){
    cin>>n;
    int root=1;
    pre(root);
    cout<<endl;
    mid(root);
    cout<<endl;
    after(root);
}
void pre(int node)
{
    cout<<node<<" ";
    if (2*node<=n)
    {
        pre(2*node);
    }
    if (2*node+1<=n)
    {
        pre(2*node+1);
    }
}
void mid(int node)
{   
    if (2*node<=n)
    {
        mid(2*node);
    }
    cout<<node<<" ";
    if (2*node+1<=n)
    {
        mid(2*node+1);
    }
}
void after(int node)
{
    if (2*node<=n)
    {
        after(2*node);
    }
    if (2*node+1<=n)
    {
        after(2*node+1);
    } 
    cout<<node<<" ";
}
//利用了二叉树左儿子序号和右儿子序号与父节点序号之间的数值关系，递归终止条件是树节点的数量