#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int A,B,g=1;

    scanf("%lld%lld",&A,&B);
    double T=0;
    T=A/sqrt(g);
    double Tmin=T;
    for (int i = 1; ; i++)
    {
        g=1+i;
        T=B*i+A/sqrt(g);
        if (T<Tmin)
        {
            Tmin=T;
        }else if (T>Tmin)
        {
            break;
        }     
    }
    printf("%.10lf",&T);
     return 0;
}