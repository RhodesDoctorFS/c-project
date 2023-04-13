#include <stdio.h>

int main()
{
    int year;
    scanf("%d",&year);
    if (year%4==0)
    {       
        if (year%100==0)
        {
            if (year%400==0)
            {
                goto OK;
            }else
            {
               goto NO;
            }                    
        }else
        {
            goto OK;
        }       
    }
NO: printf("0");
goto fuck;
OK: printf("1");     
fuck: return 0;
}