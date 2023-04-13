#include <stdio.h>
struct grade
{
    int chinese;
    int math;
};
int main()
{   
    int n;
back:printf("请输入学生人数：");
    scanf("%d",&n);
    if (n>10||n<=0)
    {
        printf("error!\n");
        goto back;
    }
    struct grade a[10];
    for (int i = 0; i < n; i++)
    {
        printf("请输入第%d个学生的语文成绩和数学成绩:",i+1);
        scanf("%d%d",&a[i].chinese,&a[i].math);
    }
    printf("编号 语文成绩 数学成绩 总成绩 平均成绩\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\t%d\t%.2lf\n",i+1,a[i].chinese,a[i].math,a[i].chinese+a[i].math,(double)(a[i].chinese+a[i].math)/2.0);
    }
     return 0;
}