#include <stdio.h>
#include <string.h>

int main()
{   
    char H [100]={0};
    scanf("%s",H); 
    
    int a,b,c,d;
    int count=0;
    for (int i = 0; i <=strlen(H); i++)
    {
        if (H[i]=='h')
        {   
           a=i+1;
           count++;
           break;
        }
        
    }
    for (int i = a; i <= strlen(H); i++)
    {
        if (H[i]=='e')
        {   
           b=i+1;
           count++;
           break;
        }
    }

    for (int i = b; i <= strlen(H); i++)
    {
        if (H[i]=='l')
        {   
           c=i+1;
           count++;
           break;
        }
    }
    for (int i = c; i <= strlen(H); i++)
    {
        if (H[i]=='l')
        {   
           d=i+1;
           count++;
           break;
        }
    }
    for (int i = d; i <=strlen(H); i++)
    {
        if (H[i]=='o')
        {   
           count++;
           break;
        }
    }
    if (count>=5)
    {
        printf("YES");
    }else
    {
        printf("NO");
    }
     return 0;
}