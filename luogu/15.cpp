#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
    vector <int> a (3);
    for (int i = 0; i < 3; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for (auto p=a.begin();p!=a.end();p++)
    {
        cout<<*p<<" ";
    }
     return 0;
}