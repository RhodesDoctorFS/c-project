#include <stdio.h>

int main()
{
    int max=0,b,n;
    scanf("%d",&n);
    for (int i =1; i <=n; i++)
    {
        scanf("%d",&b);
        if (max<b)
        {
            max=b;         
        }      
    }
    printf("%d",max);
     return 0;
}