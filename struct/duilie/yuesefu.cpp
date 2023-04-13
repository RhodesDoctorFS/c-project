#include <bits/stdc++.h>
using namespace std;


int main(){
    int m,n,q[10001],front=1,rear=0;
    cin>>n>>m;//读入队列人数和出队条件
    for (int i = 1; i <=n; i++)//写入编号
    {
        q[++rear]=i;
    }
    int cnt=0;
    while (rear>=front)
    {
        ++cnt;
        if (cnt!=m)//判断队首是否符合条件
        {
            q[++rear]=q[front];//队首排到队尾
            front++;//队首出队
        }
        else
        {
            cout<<q[front]<<" ";//输出出队编号
            front++;//队首出队
            cnt=0;//计数器归零
        }        
    }
    
    



}