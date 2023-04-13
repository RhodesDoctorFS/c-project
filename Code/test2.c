#include <stdio.h>

int main()
{
    int foot=0;//英尺
    double inch=0;//英寸
    printf("输入英尺（）输入英寸（）");
    scanf("%lf %lf",&foot,&inch);
    printf("%f米",(foot+inch/12)*0.3048);
    return 0;
}