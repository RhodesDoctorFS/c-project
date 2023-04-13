#include <bits/stdc++.h>
using namespace std;
string check="changchun university of technology";
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        char A;
        next:cin>>A;
        for (auto p:check)
        {
            if (A==p)
            {
                cout<<"YES"<<endl;
                i++;
                goto next;
            }                     
        }  
        cout<<"NO"<<endl;
    }
    
}