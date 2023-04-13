#include <stdio.h>

int main()
{
    int l=0, m=0,count=0,sum=0;
    double s=0;
    for ( ; l+s+m<=100; l++)
    {
        for ( ; l+s+m<=100; m++)
        {
            for ( ; l+s+m<=100; s++)
            {
                if(s*0.5+m*2+l*3==100)
                {
                    printf("%d,%d,%.0f\n",l,m,s);
                    sum++;
                }               
            }
            s=0;                    
        }
        m=0;           
    }
    printf("count=%d",sum);   
    return 0;
}
