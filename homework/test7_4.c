#include <stdio.h>
int main()
{
    int n,m;
    printf("请输入数组的长度和宽度");
    scanf("%d%d",&n,&m);
    int a[10][10];
    printf("请输入数组的元素\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("原矩阵为；\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("转置矩阵为；\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
     return 0;
}