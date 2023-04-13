#include <stdio.h>

int main()
{
    int X,N,a,b;
    scanf("%d %d",&X,&N);
    if (X+N<=7)
    {
        printf("%d",X+N);
    }else
    {
        b=7-X;
        N-=b;
        N%=7;
        if (N==0)
        {
            N=7;
        }
        
        printf("%d",N);
    }
    
    
   
     return 0;
}