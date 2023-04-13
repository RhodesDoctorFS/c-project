#include <stdio.h>

int main()
{
    int x,y;
    scanf("%d",&x);
    int t;
    if (x<10)
    {
       t=1;
    }else if (x>=10&&x<50)
    {
        t=2;
    }else if (x>=50&&x<100)
    {
        t=3;
    }else if (x>=100)
    {
        t=4;
    }  
    switch (t)
    {
    case 1:
        y=x;
        break;
    case 2:
        y=3*x-2;
        break;
    case 3:
        y=4*x+1;
        break;
    case 4:
        y=5*x;
        break;       
    }
    printf("%d",y);
     return 0;
}