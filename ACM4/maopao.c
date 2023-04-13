#include <stdio.h>

int main()
{
    int shuzu[50];
    int n=0;
    scanf("%d",&n);
        for (int i = 0; i < n; i++)
    {
        scanf("%d",&shuzu[i]);
    }
    int temp;
    for (int i =n-1; i>=1 ; i--)
    {
        for (int j = 0; j <= i-1; j++)
        {
            if (shuzu[j]>shuzu[j+1])
            {
                temp=shuzu[j];
                shuzu[j]=shuzu[j+1];
                shuzu[j+1]=temp;
            }          
        }      
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",shuzu[i]);
    }
     return 0;
}