#include <stdio.h>
#include<math.h>
double dis(double,double,double,double);
int main()
{
    double x1,y1,x2,y2,x3,y3;    
    double zhouchang=0;
    scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
    zhouchang=dis(x1,y1,x2,y2)+dis(x1,y1,x3,y3)+dis(x2,y2,x3,y3);
    printf("%.2lf",zhouchang);
     return 0;
}

double dis(double x1,double y1,double x2,double y2){
    double distance=0;
    distance=sqrt(pow(x1-x2,2.0)+pow(y1-y2,2.0));
    return distance;
}