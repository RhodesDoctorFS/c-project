#include <stdio.h>

int main()
{
    
    for (int i = 1; i <=9; i++)
    {
        for (int k = 1; k <=i; k++)
        {
            printf("%d*%d=%d",k,i,k*i);
            if (k!=i)
            {
                printf("\t");
            }else
            {
                printf("\n");
            }                   
        }        
    }
     return 0;
}