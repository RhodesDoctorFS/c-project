#include <stdio.h>

int main()
{
    int n,m;
    printf("请输入要输出的行数");
    scanf("%d",&n);
    printf("请输入每行要生成的星星数");
    scanf("%d",&m);
    int space=0;
    int a=0;
    for (int i = 1; i <=n ; i++)
    {   
        while (a<space)
        {
            printf(" ");
            a++;
        }
        a=0;
        for (int i = 1; i <= m; i++)
        {
            printf("*");
        }
        printf("\n");    
        space++;       
    }
     return 0;
}