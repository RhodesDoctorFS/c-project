#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    string b;
    cin>>a>>b;
    int ans=0;
    for (int i=0;i<=a.length();i++)
    {
        if (a[i]!=b[i])
        {
            if (b[i]=='x'||b[i]=='p')
            {
                ans+=2;
            }else
            {
                ans++;
            } 
        }
    }
    cout<<ans;
}