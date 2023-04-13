#include<iostream>


using namespace std;
int a(int);
int b(int);
int c(int);
int d(int);
int main()
{
    int n;
    cin>>n;
    cout<<a(n)<<" "<<b(n)<<" "<<c(n)<<" "<<d(n);

     return 0;
}
int a(int n){
     if (n%2==0&&n>4&&n<=12)
     {
          return 1;
     }else return 0;
}
int b(int n){
     if (n%2==0||n>4&&n<=12)
     {
          return 1;
     }else return 0;
}
int c(int n){
     if (n%2==0&&n>4&&n<=12)
     {
          return 0;
     }else if (n%2==0||n>4&&n<=12)
     {
          return 1;
     }else return 0;
}
int d(int n){
     if (n%2!=0&&n<4||n>12)
     {
          return 1;
     }else return 0;
}
