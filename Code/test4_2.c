#include <stdio.h>

int main()
{
    int hour1,minute1;//起始时间
    int hour2,minute2;//终止时间
    int total1,total2;
    int finnal1;

    scanf("%d %d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);
    total1= hour1*60+minute1;
    total2= hour2*60+minute2;
    finnal1= total2-total1;
    
    
    printf("%d小时 %d分钟",finnal1/60,finnal1%60);




     return 0;
}