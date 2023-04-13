#include <stdio.h>

int main()
{
     int n=0,k=0;
     while (scanf("%d%d",&n,&k)!=EOF)
     {
          for ( int i = 0; i <k; i++)
          {
               if (n%10==0)
               {
                    n/=10;              
               }else
               {
                    n--;
               }              
          }
          printf("%d",n);         
     }
     return 0;
}