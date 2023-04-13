#include<iostream>

using namespace std;
int main()
{
     string a;
     cin>>a;
     string b;
     cin>>b;
     if(a.find(b)!=string::npos)
     {
          cout<<"Yes";
     }else
     {
          cout<<"No";
     }
     return 0;
}