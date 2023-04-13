#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void guess(int);
int main()
{
    int sec=0;
    srand(time(NULL));
    sec=1+rand()%100;
    guess(sec);
     return 0;
}
void guess(int sec){
    int guess1,count=0;
    for (int i = 0; i < 8; i++)
    {
        printf("请输入一个数：");

        scanf("%d",&guess1);
        count++;
        if(guess1==sec){
            break;
        }
        else if(guess1<sec)
        {
            printf("猜小了");
        }
        else if(guess1>sec)
        {
            printf("猜大了");
        }
    }
    if (count<8)
    {
        printf("恭喜你猜对了，用了%d次",count);
    }else
    {
        printf("很不幸，游戏结束");
    }
}