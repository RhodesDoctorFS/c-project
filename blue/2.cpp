#include <bits/stdc++.h>
using namespace std;
int main(){
    string year;
    int ans=0;
    for (int i = 0; i <5; i++)
    {
        cin>>year;
        if (year[0]==year[2]&&(year[3]-year[1]==1))
        {
            ans++;
        }
    }
    cout<<ans;
    
}