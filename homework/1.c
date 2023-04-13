#include <stdio.h>


int main()
{
    int n;
    scanf("%d",&n);
    int shuzu[n];
    int max, min ,sum=0;
  
    
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&shuzu[i]);
    }
    max=shuzu[0];
    min=shuzu[0];



  


    for (int i = 1; i < n; i++)
    {   
       
        if (max<shuzu[i])
        {
            max=shuzu[i];
        }       
    }



     for (int i = 1; i < n; i++)
    {   
        
        if (min>shuzu[i])
        {
            min=shuzu[i];
        }       
    }
     for (int i = 0; i < n; i++)
    {
        sum+=shuzu[i];
    }



    printf("%d\n%d\n%d",max,min,sum);

    return 0;
}