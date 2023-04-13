#include <stdio.h>

int main()
{    int N;
     int a;
     int sum=1;
     while(scanf ("%d",&N)!=EOF){
     for (int i =0; i <N; i++)
     {    
          scanf("%d",&a);
          if (a%2==0)
          {
               a=1;              
          }    
          sum*=a;
                   
     }if (N==0)
     {
          printf("");
     }else
     {
          printf("%d\n",sum);
          sum=1;
     }    
     }
     return 0;
}