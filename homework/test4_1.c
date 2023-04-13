#include <stdio.h>

int main()
{
    int year, month, day;
    scanf("%d%d%d",&year,&month,&day);
    switch (month)
    {
    case 1||3||5||7||8||10||12:
        printf("31");
        break;
    case 2:
        if (year%4==0&&year%100!=0||year%400==0)
        {
            printf("29");
        }else
        {
            printf("28");
        }  
    default:
        printf("30");
    }
     return 0;
}