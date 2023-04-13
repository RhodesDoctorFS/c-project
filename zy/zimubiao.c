#include <stdio.h>

int main()
{
    char a,b,c;
    int a1=0,b1=0,c1=0;
    scanf("%c%c%c",&a,&b,&c);
   /* if (a<97)
    {
        a+=32;
        a1++;
    } 
    if (b<97)
    {
        b+=32;
        b1++;
    } 
    if (c<97)
    {
        c+=32;
        c1++;
    }*/ 
    if (a>=b)
    {
        if (a<c)
        {   
            printf("%c%c%c",b,a,c);
        }else if (b>=c)
        {
            printf("%c%c%c",c,b,a);
        }else
        {
            printf("%c%c%c",b,c,a);
        }       
    }else if (b<=c)
    {
        
       printf("%c%c%c",a,b,c); 
    }else
    {
       if (a>=c)
       {
        printf("%c%c%c",c,a,b);
       }else
       {
        printf("%c%c%c",a,c,b);
       }      
    }
     return 0;
}