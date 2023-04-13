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
    int zhan[100000]={1};
    int top=-1;
    int el=0;
    int ru=1;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>el;
        if (top!=-1)
        {
            if(zhan[top]==el){
                cout<<"pop"<<endl;
                top--;
                goto end;
            }
        }      
        do
        {
            top++;
            zhan[top]=ru;
            cout<<"push"<<' '<<ru<<endl;
            ru++;                     
        }while (zhan[top]!=el);
        cout<<"pop"<<endl;
        top--;
        end:int end=1;
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