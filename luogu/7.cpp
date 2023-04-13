#include<iostream>
using namespace std;
double sn(double);
int main()
{
    int k;
    scanf("%d",&k);
    double i;
    for (i = 1;; i++)
    {
        if(sn(i)>k){
            break;
        }
    }
    printf("%.2lf",i);
    return 0;
}
double sn(double i){
    if (i==1)
    {
        return 1;
    }else
    {
        return sn(i-1)+1/i;
    }
}