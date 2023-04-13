#include <stdio.h>
int age(int);
int Age=10;
int main()
{
     int n;
     
     scanf("%d",&n);
     printf("%d",age(n));
     return 0;
}
int age(int a){
     if (a==1)
     {
          return Age;
     }else
     {
          Age=Age-2;
          return age(a-1);
     }
}