#include <stdio.h>

int main()
{   
     int a,r;
     printf("请输入学生人数：");
     scanf("%d",&a);
     int date[4][2];
     for (int i = 1; i < 4; i++)
     {
          printf("请输入第%d个学生的信息",i);
          for (int j = 0; j <2; j++)
          {
               scanf("%d",&date[i][j]);
          }      
     }
     printf("\n");
     int sum[4]={0};
     for (int i = 1; i < 4; i++)
     {
          sum[i]=date[i][0]+date[i][1];
     }
     printf("编号 语文成绩 数学成绩 总成绩 平均成绩\n");
     for (int i = 1; i < 4; i++)
     {
          printf("%d\t%d\t%d\t%d\t%.2lf\n",i,date[i][0],date[i][1],sum[i],sum[i]/2.0);
     }
     
     
     return 0;
}  