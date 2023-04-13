#include<bits/stdc++.h>

using namespace std;
void push(int,int*);
int main()
{
    int q[100001];
    int front=1,rear=0;//front是队首，rear是队尾，rear+1=front代表空队列
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)//数列输入（从小到大）
    {
        int x;
        cin>>x;
        q[++rear]=x;//第一个元素入队
        int count=0;    //计数器记载队列中大于等于x-5的个数   
        for (int i=rear;i!=front; i--)//遍历队列中的除了队首的每一个元素
        {
            
            if (q[rear]-5<=q[i-1])
            {
                count++;
            }else
            {
                front=i-1;
            }                       
        }//满足则计数器加一，不满足则出队
        cout<<count<<" ";    
        
        
    }
    
    


     return 0;
}
//