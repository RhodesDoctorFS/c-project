#include <bits/stdc++.h>
using namespace std;
struct tree
{
    int value;
    int l,r,fa;
}a[1025];

void bfs();//广度优先搜算遍历，bfs序列
int n;
tree* root=&a[1];
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
    bfs();   
}
void bfs(){
    tree* q[1000001];
    int front=1,rear=1;
    q[1]=root;
    tree* p=NULL;
    while (rear>=front)
    {
        p=q[front];
        front++;
        cout<<p->value<<endl;
        if (p->l!=0)
        {
            q[++rear]=&a[p->l];
        }
        if (p->r!=0)
        {
            q[++rear]=&a[p->r];
        }       
    }
    
    



}