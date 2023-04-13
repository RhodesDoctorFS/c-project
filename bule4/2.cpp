#include <bits/stdc++.h>
using namespace std;
string a;
int main(){
    cin>>a;
    int cnt=0;
    for (auto i:a)
    {
        if (i>=97&&i<=123)
        {
            i-=32;
            cout<<i;
            cnt++;
        }
        else
        {
            cout<<i;
        }
    }
    cout<<cnt;
}