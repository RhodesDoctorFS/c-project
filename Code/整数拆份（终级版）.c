#include <stdio.h>

int main()
{
    int mask=1;
    int x;
    int i;
    int b;
    while (scanf("%d",&x)!=EOF)
    {  
        do
        {
            b=x;
            b/=10;
            mask*=10;

        } while (b<10);
        
               
       do
       {    
        i=x/mask;
        printf("%d",i);
        if (mask>9)
        {
            printf(" ");
        }
        x%=mask;
        mask/=10;

       } while (mask>0);
        
      

    }
     return 0;
}
