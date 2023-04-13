#include <stdio.h>
struct studentType
{
     int ID;    
     char name[50];
     int year,month;
     double math,englishi,c;    
};

int main()
{
     int n;
     scanf("%d",&n);
     struct studentType a[50];
     for (int i = 0; i < n; i++)
     {
          scanf("%d",&a[i].ID);
          scanf("%s",&a[i].name);
          scanf("%d",&a[i].year);
          scanf("%d",&a[i].month);
          scanf("%lf",&a[i].math);
          scanf("%lf",&a[i].englishi);
          scanf("%lf",&a[i].c);
     }
     for (int i = 0; i < n; i++)
     {    
          printf("%d %s %d/%d %.0f %.0f %.0f ",a[i].ID,a[i].name,a[i].year,a[i].month,a[i].math,a[i].englishi,a[i].c);
          printf("%.0f\n",(a[i].math+a[i].englishi+a[i].c)/3);
     }
     return 0;
}