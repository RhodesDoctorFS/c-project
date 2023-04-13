#include <bits/stdc++.h>
using namespace std;
int n;
int b;
int ans;

void solve(int a,double halfn){
    while (a!=n)
    {
        b=pow(a,2);
        b%=n;
        if (b<halfn)
        {
            ans++;
        }
        a++;
    }
}
int main(){
    cin>>n;
    double halfn=(double)n/2;
    solve(1,halfn);
    cout<<ans;
}