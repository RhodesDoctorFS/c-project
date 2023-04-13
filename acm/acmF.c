#include <stdio.h>

int main()
{    int M;
     int a;
     int sum=0;
     int N=0;
     int b=0;
     scanf("%d",&N);
     while(scanf ("%d",&M)!=EOF){
     for (int i =0; i <M; i++)
     {    
          scanf("%d",&a);
          sum+=a;
         
     }
           b++;
           printf("%d\n",sum);
           sum=0;
           if (b==N)
           {
               break;
           }
           if (b!=N)
           {
               printf("\n");
           }
           
  
     }

     return 0;
}