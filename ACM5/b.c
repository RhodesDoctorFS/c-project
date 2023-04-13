#include <stdio.h>

int main()
{
    int hour[2];
    int hour1;
    int min1;
    int min[2];
    scanf("%d",&hour1);
    scanf("%d",&min1);
    hour[0]=hour1/10;
    hour[1]=hour1%10;
    min[0]=min1/10;
    min[1]=min1%10;
    int temp;
back:    temp=hour[1];
    hour[1]=min[0];
    min[0]=temp;
    if (hour[0]==2)
    {
        if (hour[1]>=4)
        {
            temp=hour[1];
            hour[1]=min[0];
            min[0]=temp;
            min[1]++;
            if (min[1]==10)
            {
                min[1]=0;
                min[0]++;              
            }
            if (min[0]==6)
            {
                min[0]=0;
                hour[1]++;
            }
            if (hour[1]==10)
            {
                hour[1]=0;
                hour[0]++;
            }
            if (hour[0]==2)
            {
                if (hour[1]==4)
                {
                    hour[1]==1;
                    hour[0]==0;
                }                
            }
            else
            {
                if (hour[1]==10)
                {
                    hour[1]==0;
                    hour[0]++;
                }
            }
            goto back;           
        }                       
    }
    if (min[0]>=6)
    {
        temp=hour[1];
        hour[1]=min[0];
        min[0]=temp;
        min[1]++;
        if (min[1]==10)
        {
            min[1]=0;
            min[0]++;              
        }
        if (min[0]==6)
        {
            min[0]=0;
            hour[1]++;
        }
        if (hour[1]==10)
        {
            hour[1]=0;
            hour[0]++;
        }
        
        if (hour[0]==2)
        {
            if (hour[1]==4)
            {
                hour[1]==1;
                hour[0]==0;
            }                
        }
        else
        {
            if (hour[1]==10)
            {
                hour[1]==0;
                hour[0]++;
            }
        }
        goto back;
    }
    temp=hour[1];
    hour[1]=min[0];
    min[0]=temp;
    min1=min[0]*10+min[1];
    hour1=hour[0]*10+hour[1];
    printf("%d %d",hour1,min1);
     return 0;
}
