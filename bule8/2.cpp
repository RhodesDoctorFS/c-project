#include <bits/stdc++.h>
using namespace std;
int n;
int countt;
int ans;
int main(){
    cin>>n;
    while (n!=0)
    {
        n--;
        ans++;
        countt++;
        if (countt==3)
        {
            n++;
            countt=0;
        }
    }
    cout<<ans;
}