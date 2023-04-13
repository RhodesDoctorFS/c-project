#include <stdio.h>

int main()
{
    int n;
    char c='H';
    printf("请输入要打印的行数");
    scanf("%d",&n);
    for (int i = 1; i<=n; i++)
    {
        for (int j = 0; j<i ; j++)
        {
            printf("%c",c-j);
            if (j==i-1)
            {
                printf("\n");
            }            
        }       
    }
     return 0;
}