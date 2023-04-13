#include <stdio.h>

int main()
{
    int x=3,y=2,z=1,flag=0,count=1;
    printf("%d %d\n",x>y>z,x>=z+y);
    if (flag==0&&x>y)
    {
       count++;
    }
    printf("count=%d",count);
     return 0;
}
