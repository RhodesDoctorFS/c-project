#include <stdio.h>

int main()
{
    double temC,temF;
    temF=100;
    temC=5*(temF-32)/9;
    printf("华氏摄氏度%5.2f对应的摄氏温度%5.2f\n",temF,temC);
     return 0;
}