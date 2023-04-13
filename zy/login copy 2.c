#include <stdio.h>
int main()

{
    long long int a=0,b=123456;
    char username[10]={0};
    scanf("%s",username);
    scanf("%lld",&a);
    if (a==0)
    {
        printf("Wrong Password!\n");
        goto end;
    }
    
    while (a!=b)
    { 
       printf("Wrong Password!\n");
       scanf("%lld",&a);
       if (a==0)
       {
        printf("Wrong Password!\n");
        goto end;
       }       
    }
   printf("Hello %s",username);
  end:   
  return 0;
}