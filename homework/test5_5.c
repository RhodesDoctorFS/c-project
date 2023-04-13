#include <stdio.h>

int main()
{
    int k;
    printf("请输入行数：\n");
back:scanf("%d",&k);
    if (k%2==0)
    {
        printf("行数应为奇数，请重新输入:\n");
        goto back;
    }
    for (int i = 1; i <=(k+1)/2 ; i++)//上半部分打印
    {
        for (int j=1; j<=(k+1)/2-i ; j++)
        {
            printf(" ");
        }
        for (int l = 1; l <=i; l++)
        {
            printf("*");
            if (l!=i)
            {
                printf(" ");
            }else
            {
                printf("\n");
            }                      
        }
    }
    for (int i =(k+1)/2-1 ; i>=1; i--)
    {
        for (int j =1 ; j<=(k+1)/2-i ; j++)
        {
            printf(" ");
        }
        for (int l =1; l <=i ; l++)
        {
            printf("*");
            if (l!=i)
            {
                printf(" ");
            }else
            {
                printf("\n");
            }   
        }    
    }
     return 0;
}