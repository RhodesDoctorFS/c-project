#include <stdio.h>

int main()
{
    char i,j;
    int a;
    printf("请输入一个小写字母：");
    scanf("%c",&i);
    a=(int)i;
    j=(char)(a-32);
    if (97<=a<122)
    {
        printf("该小写字母对应的大写字母是：%c",j);
    }
     return 0;
}