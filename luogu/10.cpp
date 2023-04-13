#include<iostream>

using namespace std;
int main()
{
    int m,t,s,shengyu;
    cin>>m>>t>>s;
    if (t==0)
    {
        cout<<0;
        goto end;
    }
    
    
    shengyu=m-s/t;
    if (s%t!=0)
    {
        shengyu--;
    }
    
    if (shengyu<0)
    {
        shengyu=0;
    }
    
    cout<<shengyu;


end:    return 0;
}