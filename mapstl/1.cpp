#include <bits/stdc++.h>
using namespace std;
map<int,int> a;
int n;

int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        a[x]++;
    }
    int ans=0;
    for (map<int,int>::iterator it=a.begin();it!=a.end();it++)
    {
        if (it->second>=ans)
        {
            ans=it->second;
        }     
    }
    for (map<int,int>::iterator it=a.begin();it!=a.end();it++)
    {
        if (it->second==ans)
        {
            cout<<it->first<<endl;
        }       
    }  
}