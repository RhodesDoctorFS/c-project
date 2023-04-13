#include <stdio.h>
#include <math.h>
                                                  
int main()
{
     double a,b,a2,b2;
     double distance;
     scanf("%lf%lf%lf%lf",&a,&b,&a2,&b2);
     distance=sqrt(pow((a-a2),2.0)+pow((b-b2),2.0));
     printf("%.2f",distance);    
     return 0;
}