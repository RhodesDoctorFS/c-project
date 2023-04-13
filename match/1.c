#include <stdio.h>

int main()
{
    int sum1=0;//现有资金
    int sum2=0;//存的钱
    for (int month = 1; month <= 12; month++)
    {
        sum1+=300;
        int spend;
        scanf("%d",&spend);
        sum1-=spend;
        if (sum1<0)
        {
            printf("-%d",month);
            goto here;
        }
        if (sum1>0)
        {   
            sum2+=sum1/100;
            sum1%=100;                       
        }
    }
    sum2*=120;
    printf("%d",sum2+sum1);
here:    return 0;
}