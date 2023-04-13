#include <stdio.h>

int main()
{   
    int year;
    int month;
    int day;
    int total;
    while (scanf("%d/%d/%d",&year,&month,&day)!=EOF)
    {
            switch (month)
            {
            case 1:case 2:
                total=(month-1)*31+day;
                break;
            case 3:case 4:
                total=(month-1)*31+day-3;
                break;
            case 5:case 6:
                total=(month-1)*31+day-4;
                break;
            case 7:case 8:case 9:
                total=(month-1)*31+day-5;
                break;
            case 10:case 11:
                total=(month-1)*31+day-6;
            
            default:
                total=(month-1)*31+day-7;
                break;
            }
            if (year%4!=0)
            {
                printf("%d\n",total);
            }else if (month<=2)
            {
                printf("%d\n",total);
            }else if (year%400==0)
            {   
                total+=1;
                printf("%d\n",total);
            }else if (year%100==0)
            {
                 printf("%d\n",total);
            }else
            {
                total+=1;
                printf("%d\n",total);
            }
            total=0;       
    }
     return 0;
}                