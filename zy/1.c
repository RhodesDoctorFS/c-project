#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c; 
    double x1,x2;
    scanf("%lf %lf %lf",&a,&b,&c);
    if (b*b-4*a*c<0)
    {
        printf("根不存在，你傻吗");
        goto fuckoff;
    }
    
    x1=(-b+sqrt(b*b-4*a*c))/2.0*a;
    x2=(-b-sqrt(b*b-4*a*c))/2.0*a;
    printf("%g %g\n",x1,x2);
fuckoff:    
    return 0;
}