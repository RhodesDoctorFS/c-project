#include <stdio.h>

int main()
{
    int hour=0;
    scanf("%d",&hour);
    if (hour<=160)
    {
        printf("%d",10*hour);
    }else
    {
        printf("%d",1600+30*(hour-160));
    }
       return 0;
}