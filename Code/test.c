#include <stdio.h>
 
int main() 
{
 int AMOUNT ;//定义了初始值
 int price ; //定义了初始值2
 printf("请输入面值和给予的钱");
 scanf("%d %d",&AMOUNT,&price);
 
 int change=0;

  change= AMOUNT - price;

 printf("找您%d元。\n",change);
 return 0;
}

