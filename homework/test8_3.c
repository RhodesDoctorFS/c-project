#include <stdio.h>
int comfatctor(int,int);
int main()
{
    int x,y,fac;;
    printf("请输入两个整数：");
    scanf("%d%d",&x,&y);
    fac=comfatctor(x,y);
    printf("%d和%d的最小公倍数是%d\n",x,y,fac);

     return 0;
}
int comfatctor(int x ,int y){
    int a=x;
    int b=y;
    int r;
    r=x%y;
    while (r!=0)
    {
        x=y;
        y=r;
        r=x%y;
    }
    return a*b/y;
}