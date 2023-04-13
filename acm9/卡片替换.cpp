#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin>>a>>b;
        int A[101],B[101];
        for (int i = 1; i <= a; i++)
        {
            cin>>A[i];
        }
        for (int i = 1; i <= b; i++)
        {
            cin>>B[i];
        }
        int j=a;
        for (int i = 1; i <= b; i++)
        {
            A[j]=B[i];
            sort(A+1,A+a+1);
        }
        long long int sum=0;
        for (int i = 1; i <= a; i++)
        {
             sum+=A[i];
        }
        cout<<sum<<endl;
    }
}