#include<iostream>
#include<map>


using namespace std;

int main()
{
     map<double,int> a;
     a[5.5]=5;
     a[6.0]=6;
     a[7.0]=7;
     for (auto p=a.begin();p!=a.end();p++)
     {
          printf("%.2lf",p->first);
          printf(" : ");
          printf("%d\n",p->second);
     }
     

     
     return 0;
}