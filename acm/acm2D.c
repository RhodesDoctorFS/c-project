#include <stdio.h>

int main()
{   
    int x,y;
    int sum;
    int n;

 here:    while(scanf ("%d %d",&x,&y)!=EOF)
    {  if (x==0,y==0)
    {
        break;
    }
        
       for (int i = x; i < y; i++)
       {
            n=i;
            sum=n*n+n+41;
            for (int o = 2; o<sum ; o++)
            {
                if (sum%o==0)
                {
                    goto sorry;
                }               
            }            
       }goto OK;
       sorry: printf("Sorry\n");
       goto here;
       OK:printf("OK\n") ;
    }   
     return 0;
}
