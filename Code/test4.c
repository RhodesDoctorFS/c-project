#include <stdio.h>

int main()
{
    int hour1=0,minute1=0;
    int hour2=0,minute2=0;
    int total1=0,total2=0;
    int finnal1=0,finnal2=0;

    scanf("%d %d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);
    total1= hour1*60+minute1;
    total2= hour2*60+minute2;
    finnal1 =(total2-total1)/60;
    finnal2 =(total2-total1)%60;
    printf("%d小时 %d分钟",finnal1,finnal2);




     return 0;
}