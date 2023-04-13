
#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;
ull num=0;
ull num2=0;
ull total=0;
ull N;
void find(ull n)
{
    while (total<n)
    {
        total+=num;
        num++;
    }
    num--;
    num2=num-(total-n);
}
ull C()
{
    num-=1;
    num2-=1;
    ull a=1;
    ull b=1;
    for (int i = 0; i < num2; i++)
    {
        a*=num;
        num--;
        b*=num2;
        num2--;
    }
    return a/b;
}
int main(){
    cin>>N;
    find(N);
    cout<<C();
}