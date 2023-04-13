#include<iostream>
#include<vector>

using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    auto q=b.begin();
    auto p=a.begin();
    int count=1;
    if (a>b)
    {
        for (;p!=a.end();p++,q++,count++)
        {
            if (*p!=*q)
            {
                break;
            }         
        }     
    }
    if (a<b)
    {
        for (;p!=b.end();p++,q++,count++)
        {
            if (*p!=*q)
            {
                break;
            }         
        }
    }
    cout<<count;
     return 0;
}
