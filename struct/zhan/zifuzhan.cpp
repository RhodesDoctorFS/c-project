#include<iostream>

using namespace std;
int main()
{
    char zhan[10000];
    int n;
    cin>>n;  
    int top=0;
    cin>>zhan[top]; 
    int count=1;
count1:   if (count==n)
    {
        goto end;
    }else
    {
        top++;
        cin>>zhan[top];
        count++;
    }
    while (1)
    {
        if (zhan[top]-zhan[top-1]==0)
    {
        zhan[top]=0;
        zhan[top-1]=0;
        top-=2;
    }else
    {
        goto count1;
    } 
    }
end: cout<<zhan;

    return 0;
}
