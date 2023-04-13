#include <stdio.h>

int main()
{
    int a[20]={0};
    int count=0;
    int sum=0;
    for (int i = 0; i < 20; i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
        if (a[i]<0)
        {
           count++;
        }      
    }
    printf("%d ",count);
    printf("%.1lf",sum/20.0);
     return 0;
}