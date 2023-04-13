#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
     vector <int> a(10);
     int i=0;
     for (auto p=a.begin();p!=a.end();p++)
     {
          *p=++i;
          cout<<*p<<" ";
     }   
     int n;
     cin>>n;
     a.push_back(n);
     sort(a.begin(),a.end());
     for (auto p=a.begin();p!=a.end();p++)
     {
          cout<<*p<<" ";
     }
     return 0;
}