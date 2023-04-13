#include <stdio.h>

int main()
{
    int n[60];
    int N;
    int sum=0;
    double avarage;
    scanf("%d",&N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&n[i]);
    }
    for (int i = 0; i < N; i++)
    {
        sum+=n[i];
    }
    avarage=(double)sum/N;
    int countlow=0,counthigh=0;
    for (int i = 0; i < N; i++)
    {
        if (n[i]>avarage)
        {
            counthigh++;
        }else if (n[i]<avarage)
        {
            countlow++;
        }
    }
    printf("平均成绩是：%.2lf\n高于平均成绩的同学有%d人\n低于平均成绩的有%d人\n",avarage, counthigh,countlow);
     return 0;
}