#include <stdio.h>
#include <math.h>

int main()
{   double x1,x2,y1,y2;
    double distance_x ,distance_y ,distance;
    
    
    while (scanf("%lf %lf %lf %lf",&x1 ,&y1,&x2,&y2)!=EOF)
{
    distance_x=x2-x1;
    distance_y=y2-y1;
    distance=pow(distance_x,2)+pow(distance_y,2);
    printf("%.2f\n",sqrt(distance));

    
    
    
}




     return 0;
}
