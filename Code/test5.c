#include <stdio.h>

int main()
{
    double benjin;//本金
    printf("请输入本金:");
    scanf("%lf",&benjin);
    double benjin2=0;
    benjin2=benjin;
    

    int nianfen=0;
    printf("请输入存储月份:");
    scanf("%d",&nianfen);

    double lilv=0;
    printf("请输入利率:");
    scanf("%lf",&lilv);
    

    double benxiheji=0;//本息合计
    int count=0;

    while (nianfen>count)
    {   benjin*=(lilv+1);
        count++;
      
    }
    benxiheji=benjin;
    

    
    printf("年利率为：%f\n本金为：%f\n本息合计：%f",lilv,benjin2,benxiheji);

     return 0;
}