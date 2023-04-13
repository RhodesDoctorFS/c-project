#include <stdio.h>
#include <string.h>
int main()
{
    long long int a,b=123456;
    char username[10]={0};
    scanf("%s",username);
back:    scanf("%lld",&a);
    if (a==b)
    {
        printf("Hello %s",username);
    }else
    {
        printf("Wrong Password!\n");
        a=0;      
        goto back;
    }
     return 0;
}