#include<iostream>
double fanzhuan(double);

using namespace std;
int main()
{
    double a;
    cin>>a;
    printf("%.3lf",fanzhuan(a));
    return 0;
}
double fanzhuan(double a){
    double sum;
    int b=a*10;
    while (b!=0)
    {
        sum+=b%10;
        b/=10;
        sum*=10;
    }
    sum/=10000;
    return sum;
}