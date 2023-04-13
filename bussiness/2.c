#include <stdio.h>
#define  LEAP_YEAR(y) y%100!=0&&y%4==0||y%400

int main()
{
    int year;
    scanf("%d",&year);
    if (LEAP_YEAR(year)==1)
    {   
        printf("L");
    }else
    {
        printf("N");
    }
     return 0;
}