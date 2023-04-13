#include <stdio.h>

int main()
{
     int w=0;
     while (scanf("%d",&w)!=EOF)
     {
        if (w%2==0&&w!=2)
     {
          printf("YES");
     }else
     {
          printf("NO");
     }   
     }     
     return 0;
}