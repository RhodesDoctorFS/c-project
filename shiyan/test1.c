#include <stdio.h>

int main()
{   
    int a;
    int sum=0;
    int b;
    scanf("%d",&a);
    while (a!=0)  
    {
        b=a%10;
        sum+=b;
        a/=10;
        if (a==0)
        {
            break;
        }
        sum*=10;
    }
    printf("%d",sum);    
    
    return 0;
}