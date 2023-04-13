#include <bits/stdc++.h>
using namespace std;
string b;
int main()
{
    cin>>b;
    for (int i=0;i<b.size();i++)
    {
        if ((b[i]>='a'&&b[i]<='z')||(b[i]>='A'&&b[i]<='Z'))
        {
            if (b[i+1]>'0'&&b[i+1]<='9')
            {
                for (int j = b[i+1]-48; j>0; j--)
                {
                    cout<<b[i];
                }
            }else
            {
                cout<<b[i];
            }
        }
        
    }
    
}