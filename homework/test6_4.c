#include <stdio.h>

int main()
{
    int index;
    int n[46]={0};
    for ( index=2; index <=45 ; index++)
    {
        n[0]=1;
        n[1]=1;
        n[index]=n[index-1]+n[index-2];
    }
    int a;
back:    scanf("%d",&a);
    if (a>46)
    {
        printf("error!\n");
        goto back;
    }else
    {
        printf("%d",n[a-1]);
    }
     return 0;
}
