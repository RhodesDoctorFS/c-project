#include <bits/stdc++.h>
using namespace std;

vector<int> nodes[51];
int father[51];
int n;
int root=1; 
int line[2501];
vector <int> bfn;
void add(int x,int y)
{
    nodes[x].push_back(y);//在x点后加上儿子y
    father[y]=x;
}

void bfs(int x){
   
    int front=1,rear=1;
    int i=1;
    line[rear]=root;
    while (front<=rear)
    {
        
        i=front;
        bfn.push_back(i);
        front++;   
        for (int j = 0; j <nodes[i].size(); j++)
        {
            line[++rear]=nodes[i][j];
            
        }       
    } 
}

int main(){
    
    cin>>n;
    int a,b;
    for (int i = 1; i <=n; i++)
    {
        cin>>a>>b;
        add(a,b);
    }
    bfs(root);
    for (int i=0;i<bfn.size();i++)
    {
        cout<<bfn[i]<<',';
    }  
}