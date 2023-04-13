#include <stdio.h>




int main()
{    
     int month;
     int n=0;
     int count=0;
       scanf("%d",&n);
   
     char pumian [n][7];
     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < 7; j++)
         {
          scanf("%c",&pumian[i][j]);
         }
         
     }
     
     
     
     
     for (int i = 0; i <= n; i++)
     {
          for (int j = 0; j <= 7; j++)
          {
               if (pumian[i][j]=='-')
               {
                    count++;
               }
               
          }
          
     }
     printf("%d",count);


     return 0;
}