#include <stdio.h>
#include <math.h>
int zhishu(int);
int main()
{
    int a[110]={0};
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (zhishu(a[i])==0)
        {
            a[i]=-1;
        }       
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]!=-1)
        {
            printf("%d",a[i]);
            if (i!=n-1)
            {
                printf(" ");
            }
        }        
    }
     return 0;
}

int zhishu(int a){
    if (a==1||a%2==0&&a!=2)
    {
        return 0;
    }  
    for (int i = 2; i <= sqrt(a) ; i++)
    {
        if (a%i==0)
        {
            return 0;
        }       
    }
    return 1;
}

