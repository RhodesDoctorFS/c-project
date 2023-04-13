#include <stdio.h>

int main()
{    int n;
     int SUM=0;
     while (scanf("%d",&n)!=EOF)
     {    for (int i = 1; i <=n ; i++)
     {
         SUM+=i; 
     }    
          printf("%d\n\n",SUM);
          
          SUM=0;
     
     }
     
   
     return 0;
}
