#include <bits/stdc++.h>

using namespace std;
void push (int x,int rear,int size,int* q);
void del (int front,int size,int* q);
int main(){
    const int size=100;//严格大于队列的长度，避免队列满和空情况一致
    int q[size+1],front=1,rear=0;
    if (rear%size+1==front)
    {
        cout<<'空';
    }//判断队列是否为空
    //队列内元素个数
    if (rear>=front)
    {
        cout<<rear-front+1;
    }else
        cout<<rear+size-front+1;
}
void push (int x,int rear,int size,int* q){
    rear=rear%size+1;//rear等于size则rear视为1
    q[rear]=x;
}//入队
void del (int front,int size){
    front=front%size+1;//front等于size则front视为1
}//出队


