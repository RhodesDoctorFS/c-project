#include <stdio.h>

int main()
{
    int h,m;
    int h1,m1;
    scanf("%d%d",&h,&m);
    while (1)
    {
        h1=(h/10)*10+m/10;
        m1=(h%10)*10+m%10;
        if (h1>=0&&h1<24&&m1<60&&m1>=0)
        {
            break;
        }
        m++;
        if (m>=60)
        {
            h++;
            m=0;
        }
        if (h>=24)
        {
            h=0;
        }        
    }
    printf("%d %d",h,m);  
     return 0;
}
