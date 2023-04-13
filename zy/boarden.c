#include <stdio.h>

int main()
{
    double x,y;
    scanf("%lf%lf",&x,&y);
    if (x*x+y*y<4.5*4.5)
    {
        printf("in");
    }else if (x*x+y*y==4.5*4.5)
    {
        printf("on");
    }else if (x*x+y*y>4.5*4.5)
    {
        printf("out");
    }
     return 0;
}