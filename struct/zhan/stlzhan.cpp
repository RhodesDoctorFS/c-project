#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;//定义一个名字叫s的栈,都是整数
    int n;
    cin>>n;
    char com[10];
    for (int i = 0; i < n; i++)
    {
        cin>>com;
        if (com[1]=='u')
        {
            int x;
            cin>>x;
            s.push(x);//将x这个元素置于栈顶
        }else
        {
            if (com[0]=='t')
            {
                cout<<s.top()<<endl;//s.top()代表栈顶元素,用于查询

            }else
            {
                s.pop();//将栈顶元素删除
            }          
        } 
    }
     return 0;
}
//注：s.empty()返回一个bool，若栈为空则返回ture反之则返回false