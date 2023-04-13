#include<iostream>
using namespace std;
struct zhan
{
    int s[10000]={0};
    int top=-1;
};
void push(int,zhan*);
void pop(zhan*);
void top (zhan*);
void query(int,zhan*);
int main()
{
    zhan a;
    char commond[11];
    int number;
    cin>>number;
    for (int i = 0; i < number; i++)
    {
        scanf("%s",commond);
        if (commond[2]=='s')
        {
            int item;
            scanf("%d",&item);           
            push(item,&a);
        }else if (commond[0]=='p')
        {
            pop(&a);
        }else if (commond[0]='q')
        {
            int k;
            scanf("%d",&k);
            query(k,&a);
        }else
        {
            top(&a);
        }   
    }
    return 0;
}
void push(int a,zhan* b){
    (*b).s[++(*b).top]=a;
}
void pop(zhan *b){
    if ((*b).top==-1)
    {
        cout<<"栈为空，无法操作"<<endl;
    }else   
    (*b).top--;
};
void top (zhan *b){
    cout<<(*b).s[(*b).top]<<endl;
}
void query(int k,zhan* b){
    if ((*b).top-k<0)
    {
        cout<<"错误"<<endl;
    }else
    {
        cout<<(*b).s[(*b).top-k]<<endl;
    }
}