#include<bits/stdc++.h>

using namespace std;
void push(int,int*);
int main()
{
    int a[1001];//需求库
    int b[1001];//用时库
    int q[1000001];//实际队列（储存的数值为序号，比如q[front]=4,代表着队首是第四个人
    int n;//人数
    int front=1,rear=0;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        cin>>a[i];
    }
    for (int i = 1; i <=n; i++)
    {
        q[++rear]=i;        
    }
    int cnt=n;//记录还在排队的人数
    for (int i = 1;cnt!=0; i++)//i代表时间
    {
        --a[q[front]];
        if (a[q[front]]==0)
        {
            b[q[front]]=i;
            cnt--;
        }
        else{
            q[++rear]=q[front];

        }
        ++front;
    }
    for (int i = 1; i <=n; i++)
    {
        cout<<b[i];
    }
    
    
     return 0;
}
