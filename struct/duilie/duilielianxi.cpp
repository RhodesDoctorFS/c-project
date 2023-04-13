#include<bits/stdc++.h>

using namespace std;
void push(int,int*);
int main()
{
    int q[200002];
    int front=1,rear=0;//front是队首，rear是队尾，rear+1=front代表空队列
    int x,k;
    cin>>x>>k;
    q[++rear]=x;
    for (int i = 0; i < k; i++)
    {
        int y=q[front];     
        q[++rear]=q[front]*2;
        q[++rear]=q[front]*2+1;
        cout<<q[front]<<endl;
        front++;
    }
     return 0;
}