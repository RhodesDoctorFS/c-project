#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
 {  int a;
    srand((unsigned)time(NULL));
    a = rand()%99;
    a = a+1; //随机数生成模块

    printf("猜猜我在想哪个数（一百以内）\n");
    int scan;
    scanf("%d",&scan);
    while (scan!=a)
    {   if (scan>a)
    {
        printf("大了哦,请再次输入：");
        scanf("%d",&scan);
        
    }   if (scan<a)
    {
        printf("小了哦，请再次输入：");
        scanf("%d",&scan);
    }
    }
        printf("猜对啦！答案正是：%d",a);
        
    return 0;
}